#ifndef UNIT_H
#define UNIT_H

#include "city.h"

using namespace std;

class Unit : public City{
    private :
        Unit(const Unit &rhs);
        // 仅仅有声明
        Unit& operator=(const Unit &rhs);

		bool city_flag,chance_flag;
		// the unit is city?(city_flag) the unit still have chance(chance_flag)

		string explaination;
        // the explaination of the unit;

		int chance_money;
		// if it is a chance

    public :
		Unit();
		Unit(bool chance_flag,string explaination,int chance_money);
		Unit(string explaination,string city_name,int cost,int buildcost);

        bool getcity_flag();

        bool getchance_flag();

        bool check_city();
        // check it is a city or not

        int check_chance();
        // check it is a chance

        void change_chance();
};

#endif
