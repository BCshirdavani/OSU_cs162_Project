

#ifndef ZCUBE_HPP
#define ZCUBE_HPP

#include "Room.hpp"
#include "Cubicle.hpp"
#include "HallWay.hpp"
#include <string>
#include <iostream>

using namespace std;


class zCube : public Cubicle
{
public:
	zCube(string name, Room* hallway)
	{
		CoWorker = name;
		Hall = hallway;
		thisROOM = "cubicle";
	}

	void inspect(bool ventsON);

	string get_name() { return CoWorker; };

protected:
	string CoWorker;
	string thisROOM;
	Room* Hall; // point back to hallway
};



#endif // !ZCUBE_HPP

void zCube::inspect(bool ventsON)
{
	if (ventsON == true)
	{
		cout << "the whole building smells like cabage..." << endl;
		cout << "Too much air flow from the vents to pinpoint the source" << endl;
	}
	else if (ventsON == false)
	{
		cout << "The stench of cabage is hurting your nose." << endl;
		cout << CoWorker << " must be the Zombie!!!" << endl;
		cout << "           _________          " << endl;
		cout << "          /         \\         " << endl;
		cout << "         /           \\         " << endl;
		cout << "         | [==] [==] |        " << endl;
		cout << "         \\    \\/     /          " << endl;
		cout << "          |  VVVVV  |          " << endl;
		cout << "          |  VVVVV  |          " << endl;
		cout << "          \\_________/           " << endl;
		cout << endl;


	}
}

