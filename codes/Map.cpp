#include "Map.h"
#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)



Map::Map(int mapid)
{
    QFile file(":/new/prefix1/headimg/Map1.txt");
    if(! file.open(QIODevice::ReadOnly|QIODevice::Text))
        qDebug()<<file.errorString();
    else
        qDebug()<<"openok";
    file.seek(0);

    QTextStream shuru(&file);
    int i=0;

    while(! shuru.atEnd())
    {
        QString line=shuru.readLine();
        len[i]=new Unit("no extra explaination",line.toStdString(),100,20);
          i++;
//        qDebug()<<line;
    }

    length=i;
    file.close();
}


string Map::getCityInformation(int index)
{
    string information="City: <"+len[index]->getcity_name()+">\n";

    information.append("Hotel: <"+to_string(len[index]->getbuildingnumber())+">\n");
    information.append("owner: <"+to_string(len[index]->getowner())+">\n");
    information.append("buy cost: <"+to_string(len[index]->getcost())+">\n");
    information.append("Fee: <"+to_string(len[index]->getfee())+">\n");
    information.append("Next stage: <"+to_string(len[index]->nextstage())+">\n");
    information.append("Build cost:<"+to_string(len[index]->getbuildcost())+">\n");

	return information;
}


Unit* Map::getlen(int ind)
{
	return len[ind];
}


void Map::change(int ind)
{
    len[ind]->change();
}


void Map::buildingminus(int ind)
{
    len[ind]->setbuildingnumber(len[ind]->getbuildingnumber()-1);
}


void Map::citychange(int ind,int owner)
{
    len[ind]->belong(owner);
}


int Map::getlength(void)
{
	return length;
}


void Map::buildingplus(int ind)
{
    len[ind]->setbuildingnumber(len[ind]->getbuildingnumber()+1);
}
