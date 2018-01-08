//
//  Cubicle.h
//  projectFINAL
//
//  Created by Shy on 3/13/17.
//  Copyright © 2017 Shy. All rights reserved.
//

#ifndef Cubicle_hpp
#define Cubicle_hpp
#include "Room.hpp"
#include "HallWay.hpp"
#include <string>
#include <iostream>

using namespace std;


class Cubicle : public Room
{
public:
	Cubicle()				// default constructor required fro zCube to work
	{
		CoWorker = "default";
		thisROOM = "cubicle";
		Hall = nullptr;
	}

    Cubicle(string name, Room* hallway)
    {
        CoWorker = name;
		thisROOM = "cubicle";
		Hall = hallway;
    }
	void inspect(bool ventsON)
	{
		if (ventsON == true)
		{
			cout << "the whole building smells like cabage..." << endl;
			cout << "Too much air flow from the vents to pinpoint the source" << endl;
		}
		else if (ventsON == false)
		{
			cout << CoWorker << "'s desk is not the source of the cabbage stench" << endl;
			cout << "better keep searching..." << endl;
		}
	}
//	void attack() { cout << "you just punched Susan" << endl; };
	string get_name() { return CoWorker; };

private:
    Room* Hall; // point back to hallway
    string CoWorker;
	string thisROOM;
};


#endif /* Cubicle_hpp */


/*
void Cubicle::inspect(bool ventsON)
{
	if (ventsON == true)
	{
		cout << "the whole building smells like cabage..." << endl;
		cout << "Too much air flow from the vents to pinpoint the source" << endl;
	}
	else if (ventsON == false)
	{
		cout << CoWorker << "'s desk is not the source of the cabbage stench" << endl;
		cout << "better keep searching..." << endl;
	}
}
*/

