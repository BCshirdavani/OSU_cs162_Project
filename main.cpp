// main.cpp
// Project FINAL


#include "Game.hpp"
#include "Player.hpp"
#include "HallWay.hpp"
#include "Lobby.hpp"
#include "Copy.hpp"
#include "Storage.hpp"
#include "Elec.hpp"
#include "PlayLoop.hpp"
#include <iostream>
#include <string>
using namespace std;



int main()
{
	// ***********************************************	Make Rooms
    HallWay* hall;									//	make Hall Way
    hall = new HallWay();
	Cubicle* cubicle_1;								//	make cube 1
	cubicle_1 = new Cubicle("Chad", hall);
	Cubicle* cubicle_2;								//	make cube 2
	cubicle_2 = new Cubicle("Jessica", hall);
	Cubicle* cubicle_3;								//	make cube 3
	cubicle_3 = new Cubicle("Jeremey", hall);
	Cubicle* cubicle_4;								//	make cube 4
	cubicle_4 = new Cubicle("Omar", hall);
	Cubicle* cubicle_5;								//	make cube 5
	cubicle_5 = new Cubicle("Samantha", hall);
	zCube* cubicle_6;								//	make cube 6
	cubicle_6 = new zCube("Bruce", hall);
	Lobby* lobby;									// make lobby
	lobby = new Lobby(hall);
	Copy* copyRoom;									// make copy room
	copyRoom = new Copy(hall);
	Storage* stoRoom;								// make storage room
	stoRoom = new Storage(hall);
	Elec* Eroom;									// make electic room
	Eroom = new Elec(hall);
	hall->set_room(hall->get_cube1(), cubicle_1);	//	set cube1 ptr for hall
	hall->set_room(hall->get_cube2(), cubicle_2);	//	set cube2 ptr for hall
	hall->set_room(hall->get_cube3(), cubicle_3);	//	set cube3 ptr for hall
	hall->set_room(hall->get_cube4(), cubicle_4);	//	set cube4 ptr for hall
	hall->set_room(hall->get_cube5(), cubicle_5);	//	set cube5 ptr for hall
	hall->set_room(hall->get_cube6(), cubicle_6);	//	set cube6 ptr for hall
    // ***********************************************	make player
    Player* YOU;
    YOU = new Player(hall);
    // ***********************************************	make game
	Game* game1;
	game1 = new Game(YOU, hall, cubicle_1, cubicle_2, cubicle_3, cubicle_4,
		cubicle_5, cubicle_6, lobby, copyRoom, stoRoom, Eroom);
	PlayLoop* Play;
	Play = new PlayLoop(game1, YOU, hall, cubicle_1, cubicle_2, cubicle_3, cubicle_4,
		cubicle_5, cubicle_6, lobby, copyRoom, stoRoom, Eroom);

	// ***********************************************	Run the loop to play game
	Play->Play();



	// **********************************************	deallocate and free memory
	delete hall;
	hall = nullptr;
	delete cubicle_1;
	cubicle_1 = nullptr;
	delete cubicle_2;
	cubicle_2 = nullptr;
	delete cubicle_3;
	cubicle_3 = nullptr;
	delete cubicle_4;
	cubicle_4 = nullptr;
	delete cubicle_5;
	cubicle_5 = nullptr;
	delete cubicle_6;
	cubicle_6 = nullptr;
	delete lobby;
	lobby = nullptr;
	delete copyRoom;
	copyRoom = nullptr;
	delete stoRoom;
	stoRoom = nullptr;
	delete Eroom;
	Eroom = nullptr;
	delete YOU;
	YOU = nullptr;
	delete game1;
	game1 = nullptr;
	delete Play;
	Play = nullptr;
    
    return 0;
}
