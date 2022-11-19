#ifndef CONTROL_H
#define CONTROL_H

#include "player.h"
#include "Map.h"
#include "ui_dicebysound.h"
#include <dice.h>

using namespace std;

class Control
{
	private :
        int now_player,ind,playernum;

        Map* X;

    public :
        Control(int mapid);

        Player* players[4];

        int get_ind();
        // get the id of the current play

        Map* getX();

        int getNowPlayer();

        bool find_player();

        void find_place();

		bool checkmaxmony(int playername);

        int dice();

        int checkOwner(int index);
        // check the unit's owner

        void move();

        bool compare(int cityplace,int playerid);
        //compare the amount with the cost of city

        bool fee();
        // can pay for it or not,if can pay it

        bool checkcity();
        // the unit is now_player's city?

        bool checkcity(int index);
        // the unit is now_player's city?

        bool checkTarget();
        // check it is myself or not

        bool checkTarget(int index);
        // check the place is the player or not

        bool fcheckcity();
        // the unit is city?

        bool fcheckcity(int index);
        // the unit is city?

        void buy_building();
        // buy building in the city

        int playerMoney(int index);
        // how much money player[index] have

        void trade(int player1,int player2,int how);
        // trade

        void payback(int target);
        // the player sell building to pay the target money

        bool round();
        // a round

        pair<int,int> getcoordinate(int index);
};

#endif
