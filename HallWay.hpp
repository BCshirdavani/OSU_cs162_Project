//
//  HallWay.hpp
//  projectFINAL
//
//  Created by Shy on 3/13/17.
//  Copyright © 2017 Shy. All rights reserved.
//

#ifndef HallWay_hpp
#define HallWay_hpp

#include "Room.hpp"
#include "Player.hpp"
#include <string>
#include <iostream>

using namespace std;


class HallWay : public Room
{
public:
	HallWay() { thisROOM = "Hall Way"; }
	string get_room_name() { return thisROOM; };
	void set_room(Room* roomPtr, Room* there)
	{
		roomPtr = there;
	}
	void inspect(bool ventsON)
	{
		if (ventsON == true)
		{
			cout << "This whole place smells like cabage..." << endl;
			cout << "The AC vents are spreading that smell around, hard to pinpoint." << endl;
		}
		else if (ventsON == false)
		{
			cout << "Still smells like cabage, but atleast the air stopped moving." << endl;
			cout << "I better poke around to find the source" << endl;
		}
		
	}
	// Room Getters - required to set pointers after initialization
	Room* get_cube1() { return Cube1; }
	Room* get_cube2() { return Cube2; }
	Room* get_cube3() { return Cube3; }
	Room* get_cube4() { return Cube4; }
	Room* get_cube5() { return Cube5; }
	Room* get_cube6() { return Cube6; }
private:
    Room* Cube1;     // point back to cubicle
    Room* Cube2;     // point back to cubicle
    Room* Cube3;     // point back to cubicle
    Room* Cube4;     // point back to cubicle
    Room* Cube5;     // point back to cubicle
    Room* Cube6;     // point back to cubicle

	


	string thisROOM;
};






#endif /* HallWay_hpp */
