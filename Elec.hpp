

#ifndef ELEC_HPP
#define ELEC_HPP

#include "Room.hpp"
#include "HallWay.hpp"
#include <string>
#include <iostream>

using namespace std;


class Elec : public Room
{
public:
	Elec(Room* hallway)
	{
		Hall = hallway;
		thisROOM = "electrig & hvac";
	}
	void inspect(bool ventsON)
	{
		cout << "You see 2 switches on the wall:" << endl;
		cout << "\tMain Lights" << endl;
		cout << "\tMain Vents" << endl;
	}
protected:
	Room* Hall;
	string thisROOM;
};






#endif // !ELEC_HPP
