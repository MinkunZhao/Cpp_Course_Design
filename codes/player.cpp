#include "player.h"
#include<algorithm>

Player::Player()
{

}

Player::Player(std::string playername)
{
	this->Playername=playername;
	this->location=0;
    this->amount=10000;
	city_number=0;
	minimum=-1;
	maximum=-1;
	state=false;
	liveflag=true;
}


int Player::check(void)
{
	return liveflag==true?(state==false?1:0):-1;
}


void Player::change(void)
{
    state= (state==false);
}


bool Player::getstate(void)
{
	return state;
}


bool Player::getliveflag(void)
{
	return liveflag;
}


void Player::money_plus(int amount)
{
	this->amount+=amount;
}


void Player::money_minus(int amount)
{
	this->amount-=amount;
	return;
}


void Player::buy_city(int ind)
{
	cityID.push_back(ind);
	city_number+=1;
//	if(minimum==-1){
//		maximum=0;
//		maxcity.push_back(ind);
//	}
//	if(minimum==-1||minimum==0){
//		mincity.push_back(ind);
//	}
//	else{
//		vector <int>().swap(mincity);
//		mincity.push_back(ind);
//	}
//	minimum=0;
}


void Player::locationmove(int step,int length)
{
	location+=step;
    location%=length;
}


int Player::getlocation(void)
{
	return location;
}


vector<int> Player::getmaxcity(void)
{
	return maxcity;
}


int Player::getamount(void)
{
	return amount;
}


vector<int> Player::getcityID(void)
{
	return cityID;
}


vector<int> Player::getmincity(void)
{
	return mincity;
}


string Player::getname(void)
{
	return Playername;
}


void Player::erasecity(int cityid)
{
	vector<int>::iterator er=find(cityID.begin(),cityID.end(),cityid);

    if(er!=cityID.end())
    {
		cityID.erase(er);
		city_number--;
	}

	er=find(maxcity.begin(),maxcity.end(),cityid);

    if(er!=maxcity.end())
    {
		maxcity.erase(er);
	}

	er=find(mincity.begin(),mincity.end(),cityid);

    if(er!=mincity.end())
    {
		mincity.erase(er);
	}
}
