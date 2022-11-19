#include "unit.h"

#define FOR(i,a,b) for(register int i=a;i<=b;i++)

Unit::Unit(void)
{

} 


Unit::Unit(bool chance_flag,string explaination,int chance_money) : City()
{
	city_flag=false;
	this->chance_flag=chance_flag;
	this->explaination=explaination;
	this->chance_money=chance_money;
}


Unit::Unit(string explaination,string city_name,int cost,int buildcost) : City(city_name,cost,buildcost)
{
	city_flag=true;
	chance_flag=false;
	this->explaination=explaination;
}

/*
void Unit::build(int flag,string information){
	if(flag==-1){
		int num=0;
		FOR(i,0,information.size()-1){
			if(isdigit(information[i]))num=num*10+(information[i]^'0');
		}
		Unit::Unit(true,information,num);
	}
	else{
		Unit::Unit("It's city",information,flag);
	}
}*/ 


bool Unit::check_city(void)
{
	return city_flag;
}


int Unit::check_chance(void)
{
	return chance_flag==false?-1:chance_money;
}


bool Unit::getcity_flag(void)
{
	return city_flag;
}


bool Unit::getchance_flag(void)
{
	return chance_flag;
}


void Unit::change_chance(void)
{
	chance_flag=(chance_flag == false);
}
