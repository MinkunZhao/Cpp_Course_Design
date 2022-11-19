#ifndef MAP_H
#define MAP_H
#include "unit.h"
#include<qfile.h>
#include<qdebug.h>
#define Length 47
class Map{
	private :
        Map(const Map &rhs);
        //仅仅有声明
        Map& operator=(const Map &rhs);

        Unit* len[Length];

		int length;

	public :
        int ta=0;

        void buildingplus(int ind);
        // change the unit[ind] building number

        void buildingminus(int ind);
        // change the unit[ind] building number

        void change(int ind);
        //change the unit[ind] owner

        Unit* getlen(int ind);
        //get function

        int getlength();
        //get function

        void citychange(int ind,int owner);
        // the city belong to the owner

        Map(int mapid);
        // choose a map to write

        string getCityInformation(int index);
        // send information to UI
};

#endif 
