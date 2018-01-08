

#ifndef STORAGE_HPP
#define STORAGE_HPP

#include "Room.hpp"
#include "HallWay.hpp"
#include <string>
#include <iostream>
using namespace std;


class Storage : public Room
{
public:
	Storage(Room* hallway)
	{
		Hall = hallway;
		thisROOM = "storage";
	}
	
	void inspect(bool ventsON)
	{
		cout << "You see the shimmering blade of a Dragon Clan Ninja Sword" << endl;
	}

protected:
	Room * Hall;
	string thisROOM;
};










#endif // !STORAGE_HPP


