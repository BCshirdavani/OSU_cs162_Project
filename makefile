
#	Author:			Beau Shirdavani
#	Date:			3-16-2017
#	Description:	FINAL PROJECT - zombie game
#					makefile

ZomB: main.cpp Copy.hpp Cubicle.hpp Elec.hpp Game.hpp HallWay.hpp Lobby.hpp Player.hpp PlayLoop.hpp Room.hpp Storage.hpp zCube.hpp
	g++ -std=c++0x main.cpp -o ZomB

	
