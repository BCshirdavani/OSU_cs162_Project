//
//  Game.hpp
//  projectFINAL
//
//  Created by Shy on 3/13/17.
//  Copyright © 2017 Shy. All rights reserved.
//

#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <iomanip>
#include "Room.hpp"
#include "HallWay.hpp"
#include "Cubicle.hpp"
#include "Player.hpp"
#include "Copy.hpp"
#include "Lobby.hpp"
#include "Storage.hpp"
#include "Elec.hpp"
#include "zCube.hpp"
using namespace std;


class Game
{
public:
	Game(Player* p, HallWay* h1, Cubicle* c_1, Cubicle* c_2, Cubicle* c_3,
		Cubicle* c_4, Cubicle* c_5, zCube* c_6, Lobby* lob, Copy* cop1, 
		Storage* sto, Elec* elec)
	{
		p1 = p;
		hall1 = h1;
		c1 = c_1;
		c2 = c_2;
		c3 = c_3;
		c4 = c_4;
		c5 = c_5;
		c6 = c_6;
		lobby = lob;
		cop = cop1;
		stor = sto;
		E = elec;
		lightsON = true;
		ventsON = true;
		win = false;
		bad_kill = false;
		blade_scare = false;
	}
    void printMap();
	void printLocation();
	void move(Room* next) { p1->set_location(next); };
	void set_lightSWITCH();
	void set_ventSWITCH();
	void set_resetGAME() 
	{
		lightsON = true;
		ventsON = true;
		win = false;
		bad_kill = false;
		blade_scare = false;

	}
	bool get_lightsON() { return lightsON; };
	bool get_ventsON() { return ventsON; };
	void attack();
	Player* get_p() { return p1; };
	bool get_BadKill() { return bad_kill; };
	bool get_win() { return win; };
	void set_blade_scare();
	bool get_blade_scare() { return blade_scare; };
	bool in_cub()
	{
		if ((p1->get_location() == c1) || (p1->get_location() == c2) || (p1->get_location() == c3)
			|| (p1->get_location() == c4) || (p1->get_location() == c5) || (p1->get_location() == c6))
			return true;
		else 
			return false;
	}
	bool in_stor()
	{
		if ((p1->get_location() == stor))
			return true;
		else
			return false;
	}
	bool in_copy()
	{
		if ((p1->get_location() == cop))
			return true;
		else
			return false;
	}
	bool in_elec()
	{
		if ((p1->get_location() == E))
			return true;
		else
			return false;
	}
	bool in_lob()
	{
		if ((p1->get_location() == lobby))
			return true;
		else
			return false;
	}
	bool in_H()
	{
		if ((p1->get_location() == hall1))
			return true;
		else
			return false;
	}
protected:
	Player* p1;
	HallWay* hall1;
	Cubicle* c1;
	Cubicle* c2;
	Cubicle* c3;
	Cubicle* c4;
	Cubicle* c5;
	zCube* c6;
	Lobby* lobby;
	Copy* cop;
	Storage* stor;
	Elec* E;
	bool lightsON;
	bool ventsON;
	bool win;
	bool bad_kill;
	bool blade_scare;

};

//#endif GAME_HPP

void Game::set_lightSWITCH()
{
	if (lightsON)
		lightsON = false;
	else if (!(lightsON))
		lightsON = true;
}

void Game::set_ventSWITCH()
{
	if (ventsON)
		ventsON = false;
	else if (!(ventsON))
		ventsON = true;
}


void Game::attack()
{
	if ((p1->get_sword_status() == false))
	{
		if (p1->get_location() == c1)
		{
			cout << "You just punched " << c1->get_name() << " in the face..." << endl;
			cout << "security has pepper sprayed, and restrained you." << endl;
			cout << "You are most likely going to jail for assault." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c2)
		{
			cout << "You just punched " << c2->get_name() << " in the face..." << endl;
			cout << "security has pepper sprayed, and restrained you." << endl;
			cout << "You are most likely going to jail for assault." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c3)
		{
			cout << "You just punched " << c3->get_name() << " in the face..." << endl;
			cout << "security has pepper sprayed, and restrained you." << endl;
			cout << "You are most likely going to jail for assault." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c4)
		{
			cout << "You just punched " << c4->get_name() << " in the face..." << endl;
			cout << "security has pepper sprayed, and restrained you." << endl;
			cout << "You are most likely going to jail for assault." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c5)
		{
			cout << "You just punched " << c5->get_name() << " in the face..." << endl;
			cout << "security has pepper sprayed, and restrained you." << endl;
			cout << "You are most likely going to jail for assault." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c6)
		{
			cout << "You just punched " << c6->get_name() << " in the face..." << endl;
			cout << "But he used his Zombie powers, to overpower and infect you!" << endl;
			bad_kill = true;
		}
	}
	else if ((p1->get_sword_status()) == true)
	{
		if (p1->get_location() == c1)
		{
			cout << "You just decapitated " << c1->get_name() << "..." << endl;
			cout << c1->get_name() << " was NOT a zombie" << endl;
			cout << "You are going to jail for a very long time..." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c2)
		{
			cout << "You just decapitated " << c2->get_name() << "..." << endl;
			cout << c2->get_name() << " was NOT a zombie" << endl;
			cout << "You are going to jail for a very long time..." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c3)
		{
			cout << "You just decapitated " << c3->get_name() << "..." << endl;
			cout << c3->get_name() << " was NOT a zombie" << endl;
			cout << "You are going to jail for a very long time..." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c4)
		{
			cout << "You just decapitated " << c4->get_name() << "..." << endl;
			cout << c4->get_name() << " was NOT a zombie" << endl;
			cout << "You are going to jail for a very long time..." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c5)
		{
			cout << "You just decapitated " << c5->get_name() << "..." << endl;
			cout << c5->get_name() << " was NOT a zombie" << endl;
			cout << "You are going to jail for a very long time..." << endl;
			bad_kill = true;
		}
		if (p1->get_location() == c6)
		{
			cout << "You swing your Dragon Sword at " << c6->get_name() << "'s neck" << endl;
			cout << "slicing the upper half of his skull off" << endl;
			cout << "Orange blood spews all over his desk, the nightmare is over" << endl;
			cout << endl;
			cout << "                _________     " << endl;
			cout << "               /         \\    " << endl;
			cout << "              /___________\\    " << endl;
			cout << endl;
			cout << "         _____________        " << endl;
			cout << "         | [X ] [ X] |        " << endl;
			cout << "         \\    \\/     /          " << endl;
			cout << "          |   ___   |          " << endl;
			cout << "          |  (___)  |          " << endl;
			cout << "          \\_________/           " << endl;
			cout << endl;
			cout << "You and your co-workers can now return safely to your work" << endl;
			cout << "and continue to browse facebook posts from people you don't know or like." << endl;
			win = true;
		}
	}
}

void Game::printMap()
{
    cout << "__________________________________________________________________" << endl;
    cout << "|           |         |        |        |        |                |" << endl;
    cout << "|  copy     |         |        |        |        |                |" << endl;
    cout << "|  room     |         |   4    |   5    |    6   |                |" << endl;
    cout << "|                     |        |        |        |                |" << endl;
    cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
    cout << "|           |                                             L       |" << endl;
    cout << "|           |                                             o       |" << endl;
    cout << "|  storage                                                b       |" << endl;
    cout << "|  room     |             Hall Way                        b       |" << endl;
    cout << "|           |                                             y       |" << endl;
    cout << "|           |                                                     |" << endl;
    cout << "|___________|         __      ___      ___      __                |" << endl;
    cout << "|           |         |        |        |        |                |" << endl;
    cout << "|  elec.    |         |    1   |   2    |   3    |                |" << endl;
    cout << "|  hvac               |        |        |        |                |" << endl;
    cout << "|  room     |         |        |        |        |                |" << endl;
    cout << "|___________|_________|________|________|________|________________|" << endl;
}


void Game::printLocation()					
{		
	//	****************************************************************		HALL
	if ((p1->get_location() == hall1))
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |        |        |                |" << endl;
		cout << "|  room     |         |   4    |   5    |    6   |                |" << endl;
		cout << "|                     |        |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                 _O_            b       |" << endl;
		cout << "|  room     |             Hall Way          |             b       |" << endl;
		cout << "|           |                              / \\            y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |   2    |   3    |                |" << endl;
		cout << "|  hvac               |        |        |        |                |" << endl;
		cout << "|  room     |         |        |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;

	}
	//	****************************************************************		C 1
	else if (p1->get_location() == c1)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |        |        |                |" << endl;
		cout << "|  room     |         |   4    |   5    |    6   |                |" << endl;
		cout << "|                     |        |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                                b       |" << endl;
		cout << "|  room     |             Hall Way                        b       |" << endl;
		cout << "|           |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |  _O_   |   2    |   3    |                |" << endl;
		cout << "|  hvac               |   |    |        |        |                |" << endl;
		cout << "|  room     |         |  / \\   |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		C 2
	else if (p1->get_location() == c2)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |        |        |                |" << endl;
		cout << "|  room     |         |   4    |   5    |    6   |                |" << endl;
		cout << "|                     |        |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                                b       |" << endl;
		cout << "|  room     |             Hall Way                        b       |" << endl;
		cout << "|           |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |  _O_   |   3    |                |" << endl;
		cout << "|  hvac               |        |   |    |        |                |" << endl;
		cout << "|  room     |         |        |  / \\   |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		C 3
	else if (p1->get_location() == c3)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |        |        |                |" << endl;
		cout << "|  room     |         |   4    |   5    |    6   |                |" << endl;
		cout << "|                     |        |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                                b       |" << endl;
		cout << "|  room     |             Hall Way                        b       |" << endl;
		cout << "|           |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |   2    |   _O_  |                |" << endl;
		cout << "|  hvac               |        |        |    |   |                |" << endl;
		cout << "|  room     |         |        |        |   / \\  |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		C 4
	else if (p1->get_location() == c4)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |  _O_   |        |        |                |" << endl;
		cout << "|  room     |         |   |    |   5    |    6   |                |" << endl;
		cout << "|                     |  / \\   |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                                b       |" << endl;
		cout << "|  room     |             Hall Way                        b       |" << endl;
		cout << "|           |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |   2    |   3    |                |" << endl;
		cout << "|  hvac               |        |        |        |                |" << endl;
		cout << "|  room     |         |        |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		C 5
	else if (p1->get_location() == c5)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |   _O_  |        |                |" << endl;
		cout << "|  room     |         |   4    |    |   |    6   |                |" << endl;
		cout << "|                     |        |   / \\  |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                                b       |" << endl;
		cout << "|  room     |             Hall Way                        b       |" << endl;
		cout << "|           |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |   2    |   3    |                |" << endl;
		cout << "|  hvac               |        |        |        |                |" << endl;
		cout << "|  room     |         |        |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		C 6
	else if (p1->get_location() == c6)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |        |   _O_  |                |" << endl;
		cout << "|  room     |         |   4    |   5    |    |   |                |" << endl;
		cout << "|                     |        |        |   / \\  |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                                b       |" << endl;
		cout << "|  room     |             Hall Way                        b       |" << endl;
		cout << "|           |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |   2    |   3    |                |" << endl;
		cout << "|  hvac               |        |        |        |                |" << endl;
		cout << "|  room     |         |        |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		LOBBY
	else if (p1->get_location() == lobby)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |        |        |                |" << endl;
		cout << "|  room     |         |   4    |   5    |    6   |                |" << endl;
		cout << "|                     |        |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|           |                                           _O_       |" << endl;
		cout << "|  storage                                               |        |" << endl;
		cout << "|  room     |             Hall Way                      / \\       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |   2    |   3    |                |" << endl;
		cout << "|  hvac               |        |        |        |                |" << endl;
		cout << "|  room     |         |        |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		COPY
	else if (p1->get_location() == cop)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|    _O_    |         |        |        |        |                |" << endl;
		cout << "|     |     |         |   4    |   5    |    6   |                |" << endl;
		cout << "|    / \\              |        |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                                b       |" << endl;
		cout << "|  room     |             Hall Way                        b       |" << endl;
		cout << "|           |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |   2    |   3    |                |" << endl;
		cout << "|  hvac               |        |        |        |                |" << endl;
		cout << "|  room     |         |        |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		STORAGE
	else if (p1->get_location() == stor)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |        |        |                |" << endl;
		cout << "|  room     |         |   4    |   5    |    6   |                |" << endl;
		cout << "|                     |        |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|   _O_                                                   b       |" << endl;
		cout << "|    |      |             Hall Way                        b       |" << endl;
		cout << "|   / \\     |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  elec.    |         |    1   |   2    |   3    |                |" << endl;
		cout << "|  hvac               |        |        |        |                |" << endl;
		cout << "|  room     |         |        |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
	//	****************************************************************		ELECTRICAL
	else if (p1->get_location() == E)
	{
		cout << "__________________________________________________________________" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|  copy     |         |        |        |        |                |" << endl;
		cout << "|  room     |         |   4    |   5    |    6   |                |" << endl;
		cout << "|                     |        |        |        |                |" << endl;
		cout << "|___________|         |_     __|__    __|__    __|                |" << endl;
		cout << "|           |                                             L       |" << endl;
		cout << "|           |                                             o       |" << endl;
		cout << "|  storage                                                b       |" << endl;
		cout << "|  room     |             Hall Way                        b       |" << endl;
		cout << "|           |                                             y       |" << endl;
		cout << "|           |                                                     |" << endl;
		cout << "|___________|         __      ___      ___      __                |" << endl;
		cout << "|           |         |        |        |        |                |" << endl;
		cout << "|    _O_    |         |    1   |   2    |   3    |                |" << endl;
		cout << "|     |               |        |        |        |                |" << endl;
		cout << "|    / \\    |         |        |        |        |                |" << endl;
		cout << "|___________|_________|________|________|________|________________|" << endl;
	}
}


void Game::set_blade_scare()
{
	if (
		(((p1->get_location()) == c1) || 
		((p1->get_location()) == c2) ||
		((p1->get_location()) == c3) ||
		((p1->get_location()) == c4) ||
		((p1->get_location()) == c5) ||
		((p1->get_location()) == c6))
		&& (p1->get_sword_status()) 
		&& (lightsON))

		blade_scare = true;
}

#endif GAME_HPP