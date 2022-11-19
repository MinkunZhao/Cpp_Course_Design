#include "city.h"
#include <iostream>

City::City(){
	ownerflag=false;
}

City::City(std::string city_name,int cost,int buildcost)
{
	this->city_name=city_name;
	this->cost=cost;
	this->buildcost=buildcost;
    average_price=buildcost/5+cost/5;
	this->sellprice=average_price/2;
	buildingnumber=0;
	ownerflag=false;
}


void City::setName(string a)
{
    city_name=a;
}


string City::getcity_name(void)
{
	return city_name;
}


int City::getbuildingnumber(void)
{
	return buildingnumber;
}


int City::getcost(void)
{
    return cost;
}


int City::getfee(void)
{
    return cost/5+buildcost*buildingnumber/5;
}

int City::getbuildcost(void)
{
	return buildcost;
}


int City::nextstage(void)
{
	return (buildingnumber+1)*average_price;
}


int City::getsellBuildingfee()
{
    return buildcost;
}


int City::getsellfee(void)
{
    return cost*7/10;
}


int City::getowner(void){
    return owner;
}

bool City::getownerflag(void)
{
	return ownerflag;
}


void City::change(void)
{
//    std::cout<<"what?";
    owner=-1;
    ownerflag=false;
}


int City::culnum(int fee)
{
	int ans=fee/sellprice;
    if(ans*sellprice<fee)
        ans++;

    return ans;
}


void City::setbuildingnumber(int num)
{
	buildingnumber=num;
}


void City::belong(int owner)
{
	ownerflag=true;
	this->owner=owner;
}
