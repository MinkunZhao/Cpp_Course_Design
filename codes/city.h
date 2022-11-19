#ifndef CITY_H
#define CITY_H

#include<string>
//#include"float.h"

using namespace std;

class City
{
    private :
        City(const City &rhs);
        // 仅仅有声明
        City& operator=(const City &rhs);

        string city_name;
        // the city name

        int buildingnumber;
        // the number of buildings in the city

        int owner=-1;
        // the owner of the city

        int average_price;
        // the price of building a building

        int cost;
        // the cost need to buy the city

		int buildcost;
        // the cost of selling a building in the city

		int sellprice;
        // the price of selling the city

        bool ownerflag;
        // whether the city have owner or not

    public :
        City();
        // when the unit is not city
        City(string city_name,int cost,int buildcost);
        // when the unit is a city

        int getsellBuildingfee();

        void setbuildingnumber(int);

        void setName(string);

        string getcity_name();

        bool getownerflag();

        int getowner();

        int getbuildingnumber();

        int getcost();

        int getbuildcost();

        int getsellfee();

        int getfee();
        // the renting money need in the city
		
        void belong(int);
        // set the new owner

        int culnum(int);
        // culculate the building number need to sell

        void change();
        // change the owner;

        int nextstage();
        // the fee after next building is built
};

#endif
