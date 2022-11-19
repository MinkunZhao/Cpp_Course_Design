#include "Control.h"
#include<bits/stdc++.h>
#include <stdlib.h>
//#include <dice.h>
#include "dicebysound.h"

using namespace std;

#define FOR(i,a,b) for(int i=a;i<=b;i++)


Control::Control(int mapid):X(new Map(mapid))
{
    playernum=4;
	string ax;

    FOR(i,0,playernum-1)
    {
        players[i]=new Player("Text");
	}

	now_player=0;
    ind=0;
}


pair<int,int> Control::getcoordinate(int index)
{
    pair<int,int> ans;

    if(index>=0&&index<6)
    {
        ans.first=10;
        ans.second=10+index*150;
    }

    else if(index>=6&&index<=11)
    {
        ans.first=10+(index-5)*200;
        ans.second=10+5*150;
    }

    else if(index>11&&index<=16)
    {
        ans.first=10+6*200;
        ans.second=10+(16-index)*150;
    }

    else
    {
        ans.first=10+(22-index)*200;
        ans.second=10;
    }

    ans.first+=rand()%140;
    ans.second+=rand()%90;

    return ans;
}


int Control::getNowPlayer()
{
    return now_player;
}


Map* Control::getX()
{
    return X;
}


bool Control::find_player(void)
{
	int x=now_player;
	now_player=(now_player+1)%playernum;

    while(!players[now_player]->getliveflag())
    {
		now_player=(now_player+1)%playernum;
        if(now_player==x)
            return false;
	}

	return true;
}


void Control::find_place(void)
{
	ind++;
}


/*int Control::dice(void)
 * {
    int roll;
    roll = rand() % 6 + 1;
    return roll;
}*/

int Control::dice(void)
{
    dicebysound* dicebs = new dicebysound;
    Dice d(1);
    dicebs->show();
    return d.getans();

    //return rand()%6+1;
}


int Control::checkOwner(int index)
{
    if(X->getlen(index)->getcity_flag()==false)
        return -1;
    if(X->getlen(index)->getownerflag()==false)
        return -1;

    return X->getlen(index)->getowner();
}


void Control::move()
{
    int temp=dice();
    players[now_player]->locationmove(temp,X->getlength());
    ind=players[now_player]->getlocation();

    return;
}


bool Control::compare(int cityplace,int playerid)
{
	return X->getlen(cityplace)->getcost()<players[playerid]->getamount();
}


bool Control::fee(void)
{
    if(X->getlen(ind)->getfee()<players[now_player]->getamount())
    {
		players[now_player]->money_minus(X->getlen(ind)->getfee());
		return true;
	}

	return false;
}


bool Control::checkTarget(void)
{
	int theowner=Control::checkOwner(ind);
    if(theowner==-1)
        return false;
    else
        return theowner==now_player;
}


bool Control::checkTarget(int index)
{
	int theowner=Control::checkOwner(index);
    if(theowner==-1)
        return false;
    else
        return theowner==now_player;
}


bool Control::checkcity(void)
{
    if(!X->getlen(ind)->check_city())
    {
        cout<<"not city";
        return false;
    }

    return X->getlen(ind)->getowner()!=now_player;
}


bool Control::checkcity(int index)
{
    if(X->getlen(index)->check_city()==false)
        return false;

    return X->getlen(index)->getowner()!=now_player;
}


bool Control::fcheckcity(void)
{
	return X->getlen(ind)->check_city();
}


bool Control::fcheckcity(int index)
{
	return X->getlen(index)->check_city();
}


bool Control::checkmaxmony(int playername)
{
	vector<int> cul=players[now_player]->getcityID();
	int ans=0;

    FOR(i,0,cul.size()-1)
    {
		ans+=X->getlen(cul[i])->getsellfee();
	}

	return X->getlen(ind)->getfee()<ans;
}


void Control::trade(int player1,int player2,int how)
{
    if(how==1)
    {
		vector<int> cul=players[player1]->getcityID();
        while(true)
        {
			int index;
			scanf("%d",&index);
            if(index==-1)
                break;
			vector<int>::iterator er=find(cul.begin(),cul.end(),index);

            if(er!=cul.end())
            {
                if(X->getlen(index)->getbuildingnumber()==0)
                {
					continue;
				}

                else
                {
					players[player2]->buy_city(index);
					players[player1]->erasecity(index);
				}
			}
		}
	}

    if(how==2)
    {
		vector<int> cul=players[player2]->getcityID();

        while(true)
        {
			int index;
			scanf("%d",&index);
			if(index==-1)break;
			vector<int>::iterator er=find(cul.begin(),cul.end(),index);

            if(er!=cul.end())
            {
                if(X->getlen(index)->getbuildingnumber()==0)
                {
					continue;
				}

                else
                {
					players[player1]->buy_city(index);
					players[player2]->erasecity(index);
				}
			}
		}
	}
}


int Control::get_ind()
{
    return ind;
}


bool Control::round()
{
    if(1)
    {
        //players[now_player]->getstate()==false
		// handle this unit 
        if(Control::checkcity())
        {
			// the unit is city and not belong to now_player
            if(!Control::fee())
            {
                return false;
			}

            else
            {
				players[now_player]->money_minus(X->getlen(ind)->getfee());
                now_player++;
                now_player%=playernum;
                ind=players[now_player]->getlocation();

                return true;
			}
		}

        else
        {
            now_player++;
            now_player%=playernum;
            ind=players[now_player]->getlocation();

            return true;
        }
	}
}
