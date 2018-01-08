
#ifndef LOBBY_HPP
#define LOBBY_HPP

#include "Room.hpp"
#include "HallWay.hpp"
#include <iostream>
#include <string>
using namespace std;

class Lobby : public Room
{
public:
	Lobby(Room* hallaway)
	{
		Hall = hallaway;
		Receptionist = "Holly";
		thisROOM = "lobby";
	}
	void inspect(bool ventsON)
	{ 
		cout << "the receptionist is avoiding eye contact" << endl;
		cout << "she definitely thinks you farted..." << endl;
		cout << "This is awkward." << endl;
	};
	void chat()
	{
		cout << "You made mutually uncomfortable small talk," << endl; 
		cout << "and learned that the weather is 'nice' today..." << endl;
		cout << "You also learned that she hopes the weather will ' stay this nice tomorrow'..." << endl;
	}

protected:
	Room* Hall;
	string Receptionist;
	string thisROOM;
};




#endif LOBBY_HPP