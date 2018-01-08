//
//  Player.hpp
//  projectFINAL
//
//  Created by Shy on 3/13/17.
//  Copyright © 2017 Shy. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include "Room.hpp"
#include "HallWay.hpp"
#include <iostream>
#include <string>

class Player
{
public:
	Player(Room* start)
	{
		sword = false;
		location = start;
	}

	void takeSword()
	{
		sword = true;
		cout << endl;
		cout << ",_,_,_,_,_,_,_,_,_,_|______________________________________________________" << endl;
		cout << "|#|#|#|#|#|#|#|#|#|#|_____________________________________________________/" << endl;
		cout << "'-'-'-'-'-'-'-'-'-'-|----------------------------------------------------'" << endl;
		cout << endl;
		cout << "You picked up the Dragon Sword, you feel powerful, like a true mall ninja" << endl;
		cout << endl << "Now you are ready to kill Zombie(s)..." << endl;
	};
	void dropSword() { sword = false; };
	void set_location(Room* next) { location = next; };
	Room* get_location() { return location; };
	bool get_sword_status() { return sword; };

protected:
	bool sword;
	Room* location;
	void move(Room* next) { location = next; };

};

#endif /* Player_hpp */

