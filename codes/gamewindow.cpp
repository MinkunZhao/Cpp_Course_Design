#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <mainwindow.h>


GameWindow::GameWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameWindow),
    con(new Control(1))
{
    ui->setupUi(this);

    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(600);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start();

    chessPs={ui->pc1,ui->pc2,ui->pc3,ui->pc4};
    QList<QPushButton *> buttons=this->findChildren<QPushButton *>();

    for(int i=0;i<22;i++)
    {
         connect(buttons[i],&QPushButton::clicked,this,[=]
         {
             this->target_city_show(i);
         });
    }

    now_playindex=con->getNowPlayer();
    ui->target_text->setText(QString::fromStdString(to_string(con->getX()->ta)));
}


GameWindow::~GameWindow()
{
    delete ui;
}


void GameWindow::update_see_money()
{
    string t1="";

    for(int i=0;i<4;i++)
    {
        t1+="p"+to_string(i)+": "+to_string(con->players[i]->getamount())+"\n";
    }

    ui->see_money->setText(QString::fromStdString(t1));

    return;
}


void GameWindow::target_city_show(int t1)
{
    target_city=t1;
    QString s=QString::fromStdString(con->getX()->getCityInformation(t1));
//       QString s=QString::fromStdString(to_string(t1));
    cout<<s.toStdString()<<endl;
    ui->target_text->setText(s);

    update_see_money();
}


void GameWindow::on_pushButton_28_clicked()//next
{
    if(!haDice)
    {
        ui->target_text->setText("You have never dice!");
        return;
    }

    else
    {
        haDice=false;
        if(!con->round())
        {
            ui->target_text->setText("You can't finish your round!");
        }
    }

    update_see_money();
}

void GameWindow::on_Buy_local_clicked()
{
    if(con->fcheckcity(con->get_ind())&&!(con->getX()->getlen(con->get_ind())->getownerflag()))
    {
        if(con->compare(con->get_ind(),con->getNowPlayer()))
        {
            ui->target_text->setText("You buy this city!");

            con->players[con->getNowPlayer()]->money_minus(con->getX()->getlen(con->get_ind())->getcost());
            con->getX()->citychange(con->get_ind(),con->getNowPlayer());
            con->players[con->getNowPlayer()]->buy_city(con->get_ind());

            string t1="You buy "+con->getX()->getlen(con->get_ind())->getcity_name()+" succesfully!";

            ui->target_text->setText(QString::fromStdString(t1));
        }

        else
        {
            ui->target_text->setText("Your money is not enough!");
        }
    }

    else
    {
        ui->target_text->setText("The place has already had an owner!");
    }

    update_see_money();
    update_owner_state();
}


void GameWindow::on_Dice_clicked()
{
    if(haDice)
    {
        ui->target_text->setText("You have already diced!");
    }

    else
    {
        con->move();
        haDice=true;
        pair<int,int> ans=con->getcoordinate(con->get_ind());
        chessPs[con->getNowPlayer()]->move(ans.first,ans.second);
    }

    update_see_money();
}


void GameWindow::on_sell_place_clicked()
{
    if(con->getX()->getlen(target_city)->getowner()!=con->getNowPlayer())
    {
        ui->target_text->setText("It is not your city!");
    }

    else if(con->getX()->getlen(target_city)->getbuildingnumber()!=0)
    {
        ui->target_text->setText("There are some buildings on it!");
    }

    else
    {
        con->players[con->getNowPlayer()]->money_plus(con->getX()->getlen(target_city)->getsellfee());
        con->players[con->getNowPlayer()]->erasecity(target_city);
        con->getX()->change(target_city);

        ui->target_text->setText("You sell the city succesefully!");
    }

    update_see_money();
    update_owner_state();
}


void GameWindow::on_sell_house_clicked()
{
    if(con->getX()->getlen(target_city)->getowner()!=con->getNowPlayer())
    {
        ui->target_text->setText("It is not your city!");
        return;
    }

    else if(!con->getX()->getlen(target_city)->getownerflag())
    {
        ui->target_text->setText("The city has no owner!");
        return;
    }

    else if(con->getX()->getlen(target_city)->getbuildingnumber()==0)
    {
        ui->target_text->setText("There is no house!");
        return;
    }

    else
    {
        con->players[con->getNowPlayer()]->money_plus(con->getX()->getlen(target_city)->getsellBuildingfee());
        con->getX()->buildingminus(target_city);

        string t1="You sell your building on "+con->getX()->getlen(target_city)->getcity_name()+" succesfully!\n";
        t1+="Now it has "+to_string(con->getX()->getlen(target_city)->getbuildingnumber())+" buildings";

        ui->target_text->setText(QString::fromStdString(t1));
    }

    update_see_money();
    update_building_number();
}


void GameWindow::on_Build_clicked()
{
    if(con->getX()->getlen(con->get_ind())->getowner()!=con->getNowPlayer())
    {
        ui->target_text->setText("It is not your city!");
        return;
    }

    else if(!con->getX()->getlen(con->get_ind())->getownerflag())
    {
        ui->target_text->setText("The city has no owner!");
        return;
    }

    if(con->getX()->getlen(con->get_ind())->getbuildcost()<con->players[con->getNowPlayer()]->getamount())
    {
        con->getX()->buildingplus(con->get_ind());
        con->players[con->getNowPlayer()]->money_minus(con->getX()->getlen(con->get_ind())->getbuildcost());

        string t1="You build on "+con->getX()->getlen(con->get_ind())->getcity_name()+" succesfully!\n";
        t1+="Now it has "+to_string(con->getX()->getlen(con->get_ind())->getbuildingnumber())+" buildings";

        ui->target_text->setText(QString::fromStdString(t1));
    }

    update_see_money();
    update_building_number();
}


void GameWindow::update_building_number()
{
    ui->building_num0->setText(QString::fromStdString(to_string(con->getX()->getlen(0)->getbuildingnumber())));
    ui->building_num1->setText(QString::fromStdString(to_string(con->getX()->getlen(1)->getbuildingnumber())));
    ui->building_num2->setText(QString::fromStdString(to_string(con->getX()->getlen(2)->getbuildingnumber())));
    ui->building_num3->setText(QString::fromStdString(to_string(con->getX()->getlen(3)->getbuildingnumber())));
    ui->building_num4->setText(QString::fromStdString(to_string(con->getX()->getlen(4)->getbuildingnumber())));
    ui->building_num5->setText(QString::fromStdString(to_string(con->getX()->getlen(5)->getbuildingnumber())));
    ui->building_num6->setText(QString::fromStdString(to_string(con->getX()->getlen(6)->getbuildingnumber())));
    ui->building_num7->setText(QString::fromStdString(to_string(con->getX()->getlen(7)->getbuildingnumber())));
    ui->building_num8->setText(QString::fromStdString(to_string(con->getX()->getlen(8)->getbuildingnumber())));
    ui->building_num9->setText(QString::fromStdString(to_string(con->getX()->getlen(9)->getbuildingnumber())));
    ui->building_num10->setText(QString::fromStdString(to_string(con->getX()->getlen(10)->getbuildingnumber())));
    ui->building_num11->setText(QString::fromStdString(to_string(con->getX()->getlen(11)->getbuildingnumber())));
    ui->building_num12->setText(QString::fromStdString(to_string(con->getX()->getlen(12)->getbuildingnumber())));
    ui->building_num13->setText(QString::fromStdString(to_string(con->getX()->getlen(13)->getbuildingnumber())));
    ui->building_num14->setText(QString::fromStdString(to_string(con->getX()->getlen(14)->getbuildingnumber())));
    ui->building_num15->setText(QString::fromStdString(to_string(con->getX()->getlen(15)->getbuildingnumber())));
    ui->building_num16->setText(QString::fromStdString(to_string(con->getX()->getlen(16)->getbuildingnumber())));
    ui->building_num17->setText(QString::fromStdString(to_string(con->getX()->getlen(17)->getbuildingnumber())));
    ui->building_num18->setText(QString::fromStdString(to_string(con->getX()->getlen(18)->getbuildingnumber())));
    ui->building_num19->setText(QString::fromStdString(to_string(con->getX()->getlen(19)->getbuildingnumber())));
    ui->building_num20->setText(QString::fromStdString(to_string(con->getX()->getlen(20)->getbuildingnumber())));
    ui->building_num21->setText(QString::fromStdString(to_string(con->getX()->getlen(21)->getbuildingnumber())));
}


void GameWindow::update_owner_state()
{
    if (con->fcheckcity(0)&&!(con->getX()->getlen(0)->getownerflag()))
    {
        ui->owner_state0->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(0)->getowner())
            {
            case 0:
                ui->owner_state0->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state0->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state0->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state0->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(1)&&!(con->getX()->getlen(1)->getownerflag()))
    {
        ui->owner_state1->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(1)->getowner())
            {
            case 0:
                ui->owner_state1->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state1->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state1->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state1->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(2)&&!(con->getX()->getlen(2)->getownerflag()))
    {
        ui->owner_state2->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(2)->getowner())
            {
            case 0:
                ui->owner_state2->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state2->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state2->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state2->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(3)&&!(con->getX()->getlen(3)->getownerflag()))
    {
        ui->owner_state3->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(3)->getowner())
            {
            case 0:
                ui->owner_state3->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state3->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state3->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state3->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(4)&&!(con->getX()->getlen(4)->getownerflag()))
    {
        ui->owner_state4->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(4)->getowner())
            {
            case 0:
                ui->owner_state4->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state4->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state4->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state4->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(5)&&!(con->getX()->getlen(5)->getownerflag()))
    {
        ui->owner_state5->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(5)->getowner())
            {
            case 0:
                ui->owner_state5->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state5->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state5->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state5->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(6)&&!(con->getX()->getlen(6)->getownerflag()))
    {
        ui->owner_state6->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(6)->getowner())
            {
            case 0:
                ui->owner_state6->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state6->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state6->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state6->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(7)&&!(con->getX()->getlen(7)->getownerflag()))
    {
        ui->owner_state7->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(7)->getowner())
            {
            case 0:
                ui->owner_state7->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state7->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state7->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state7->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(8)&&!(con->getX()->getlen(8)->getownerflag()))
    {
        ui->owner_state8->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(8)->getowner())
            {
            case 0:
                ui->owner_state8->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state8->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state8->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state8->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(9)&&!(con->getX()->getlen(9)->getownerflag()))
    {
        ui->owner_state9->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(9)->getowner())
            {
            case 0:
                ui->owner_state9->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state9->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state9->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state9->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(10)&&!(con->getX()->getlen(10)->getownerflag()))
    {
        ui->owner_state10->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(10)->getowner())
            {
            case 0:
                ui->owner_state10->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state10->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state10->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state10->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(11)&&!(con->getX()->getlen(11)->getownerflag()))
    {
        ui->owner_state11->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(11)->getowner())
            {
            case 0:
                ui->owner_state11->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state11->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state11->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state11->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(12)&&!(con->getX()->getlen(12)->getownerflag()))
    {
        ui->owner_state12->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(12)->getowner())
            {
            case 0:
                ui->owner_state12->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state12->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state12->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state12->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(13)&&!(con->getX()->getlen(13)->getownerflag()))
    {
        ui->owner_state13->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(13)->getowner())
            {
            case 0:
                ui->owner_state13->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state13->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state13->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state13->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(14)&&!(con->getX()->getlen(14)->getownerflag()))
    {
        ui->owner_state14->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(14)->getowner())
            {
            case 0:
                ui->owner_state14->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state14->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state14->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state14->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(15)&&!(con->getX()->getlen(15)->getownerflag()))
    {
        ui->owner_state15->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(15)->getowner())
            {
            case 0:
                ui->owner_state15->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state15->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state15->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state15->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(16)&&!(con->getX()->getlen(16)->getownerflag()))
    {
        ui->owner_state16->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(16)->getowner())
            {
            case 0:
                ui->owner_state16->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state16->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state16->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state16->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(17)&&!(con->getX()->getlen(17)->getownerflag()))
    {
        ui->owner_state17->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(17)->getowner())
            {
            case 0:
                ui->owner_state17->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state17->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state17->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state17->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(18)&&!(con->getX()->getlen(18)->getownerflag()))
    {
        ui->owner_state18->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(18)->getowner())
            {
            case 0:
                ui->owner_state18->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state18->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state18->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state18->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(19)&&!(con->getX()->getlen(19)->getownerflag()))
    {
        ui->owner_state19->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(19)->getowner())
            {
            case 0:
                ui->owner_state19->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state19->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state19->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state19->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(20)&&!(con->getX()->getlen(20)->getownerflag()))
    {
        ui->owner_state20->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(20)->getowner())
            {
            case 0:
                ui->owner_state20->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state20->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state20->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state20->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }

    if (con->fcheckcity(21)&&!(con->getX()->getlen(21)->getownerflag()))
    {
        ui->owner_state21->setStyleSheet("");
    }

    else
    {
            switch (con->getX()->getlen(21)->getowner())
            {
            case 0:
                ui->owner_state21->setStyleSheet("border-image: url(:/new/prefix1/headimg/p1.png)");
                break;
            case 1:
                ui->owner_state21->setStyleSheet("border-image: url(:/new/prefix1/headimg/p2.png)");
                break;
            case 2:
                ui->owner_state21->setStyleSheet("border-image: url(:/new/prefix1/headimg/p3.png)");
                break;
            case 3:
                ui->owner_state21->setStyleSheet("border-image: url(:/new/prefix1/headimg/p4.png)");
                break;
            }
    }
}


void GameWindow::on_exit_clicked()
//exit and restart the game
{
    this->close();
    MainWindow *newMain = new MainWindow;
    newMain->show();
}
