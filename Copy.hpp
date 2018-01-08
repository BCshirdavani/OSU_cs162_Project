




#ifndef COPY_HPP
#define COPY_HPP

#include "Room.hpp"
#include "HallWay.hpp"
#include <string>
#include <iostream>

using namespace std;

class Copy : public Room
{
public:
	Copy(Room* hallway)
	{
		Hall = hallway;
	}
	void inspect(bool ventsON) { cout << "You see a copy machine." << endl; };
	void copyMachine()
	{
		cout << "It looks like the last person to use this machine, " << endl;
		cout << "used it to copy an ancient scroll, a passage from it reads: " << endl;
		cout << endl;
		cout << "\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "\tThe Zombie smells of old cabage in a dutch oven..." << endl;
		cout << "\tTo find the Zombie, find the smell..." << endl;
		cout << "\tTo find the smell, search while the air is calm" << endl;
		cout << "\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;
		cout << "...strange, this must be some sort of hint...while the air is still..." << endl;
	}
protected:
	Room* Hall;
};


#endif // !COPY_HPP




/*
void Copy::copyMachine()
{
	cout << "           __________________________             " << endl; 
	cout << "           |:::::::::::::::::::::::::|            " << endl; 
	cout << "           |:::.-""     V    ""-.::::|            " << endl;
	cout << "           |:.\"        '        \".:|            " << endl;
	cout << "           |:|          *         | :|            " << endl;
	cout << "           |:|         ,^.        |::|            " << endl;
	cout << "           |:\\       /O O\\      /::|            " << endl;
	cout << "           |::|         ||       |:::|            " << endl;
	cout << "           |:: . . . . :::: . . : :::|            " << endl;
	cout << "           |:: : : : : :::: : : : :::|            " << endl;
}



*/