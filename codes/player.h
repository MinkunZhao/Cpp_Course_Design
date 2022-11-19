#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include<vector>

using namespace std;

class Player{
	private :
        string Playername;
        // player's name

        int location;
        // where the player is

        int amount;
        // the money the player have
		int city_number,minimum,maximum;
		// how many city have(city_number)
        // minimum = the minimum number of the building in one city
        // maximum = the maximum number of the building in one city

		vector<int> cityID;
        // all the cities the player own

		vector<int> mincity;
		// the city which have min number of building the player have

		vector<int> maxcity;
		// the city which have max number of building the player have

		bool state;
		// jailed or not

		bool liveflag;
		// alive or not

	public :
		Player();
        Player(string playername);

        int check();
        // check alive or jailed

        void change();
        // change the state

        void locationmove(int step,int length);
        // the location change

        bool getstate();

        int getlocation();

        bool getliveflag();

        int getamount();

        string getname();

        vector<int> getcityID();

        vector<int> getmaxcity();

        vector<int> getmincity();

        void money_plus(int amount);
        // get more money

        void money_minus(int amount);
        // pay money

        void buy_city(int ind);
        // buy city

        void erasecity(int cityid);
        //erase the city that should be sold
};

#endif
