

#ifndef PLAYLOOP_HPP
#define PLAYLOOP_HPP

#include "Game.hpp"
#include <string>
#include <iostream>
using namespace std;

class PlayLoop
{
public:
	PlayLoop(Game* g, Player* p, HallWay* h1, Cubicle* c_1, Cubicle* c_2, 
		Cubicle* c_3, Cubicle* c_4, Cubicle* c_5, zCube* c_6, Lobby* lob, 
		Copy* cop1, Storage* sto, Elec* elec)
	{
		game1 = g;
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
	}

	void Play();

private:
	Game* game1;
	char again;
	char choice;
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
};

//#endif // !PLAYLOOP_HPP

void PlayLoop::Play()
{
	cout << endl;
	cout << "  __________  __  __ ____ _____ ______   _  _______ _      _      ______ _____ " << endl;
	cout << " |___  / __ \\|  \\/  |  _ \\_   _|  ____| | |/ /_   _| |    | |    |  ____|  __ \\ " << endl;
	cout << "    / / |  | | \\  / | |_) || | | |__    | ' /  | | | |    | |    | |__  | |__) |" << endl;
	cout << "   / /| |  | | |\\/| |  _ < | | |  __|   |  <   | | | |    | |    |  __| |  _  / " << endl;
	cout << "  / /_| |__| | |  | | |_) || |_| |____  | . \\ _| |_| |____| |____| |____| | \\ \\ " << endl;
	cout << " /_____\\____/|_|  |_|____/_____|______| |_|\\_\\_____|______|______|______|_|  \\_\\ " << endl;
	cout << endl;
	cout << "\tToday, is not your typical work day." << endl << endl;
	cout << endl;
	cout << "\tYour office place stinks of cabbage. You know, this can only mean one thing." << endl;
	cout << "\tA Zombie must be near. One of your co-workers has been infected by" << endl;
	cout << "\tzombie gas X, an experimental chemical that escaped a lab in Raccoon City." << endl;
	cout << "\tIt is up to you, to find out who the zombie is, and end this nightmare..." << endl;
	
	game1->printLocation();

	do
	{
		// reset settings, for play again
		p1->dropSword();
		p1->set_location(hall1);
		game1->set_resetGAME();

		do
		{
			game1->set_blade_scare();
			// ***************************************************		actions from Cubicle
			if ((game1->in_cub()))
			{	// show Cubicle Actions
				cout << endl;
				cout << "Choose an action:" << endl;
				cout << "\t(a) Inspect" << endl;
				cout << "\t(b) Attack" << endl;
				cout << "\t(c) Go back to hallway" << endl;
				cin >> choice;
				cin.ignore();
				// Execute Cubicle Actions
				if (choice == 'a'){p1->get_location()->inspect(game1->get_ventsON());}
				if (choice == 'b'){game1->attack();}
				if (choice == 'c'){p1->set_location(hall1); game1->printLocation();}
			}
			// ****************************************************		actions from Hall
			if ((game1->in_H()))
			{	// show Hall Way options
				cout << endl;
				cout << "Choose an action:" << endl;
				cout << "\t(a) Inspect" << endl;
				cout << "\t(b) Go to Cubicle 1" << endl;
				cout << "\t(c) Go to Cubicle 2" << endl;
				cout << "\t(d) Go to Cubicle 3" << endl;
				cout << "\t(e) Go to Cubicle 4" << endl;
				cout << "\t(f) Go to Cubicle 5" << endl;
				cout << "\t(g) Go to Cubicle 6" << endl;
				cout << "\t(h) Go to Copy Room" << endl;
				cout << "\t(i) Go to Storage Room" << endl;
				cout << "\t(j) Go to Electrical & Vent Room" << endl;
				cout << "\t(k) Go to Lobby" << endl;
				cout << "\t(q) Quit work, and walk out..." << endl;
				cin >> choice;
				cin.ignore();
				// Execute Hall Way Choice
				if (choice == 'a'){p1->get_location()->inspect(game1->get_ventsON());}
				if (choice == 'b') { p1->set_location(c1); game1->printLocation();}
				if (choice == 'c') { p1->set_location(c2); game1->printLocation();}
				if (choice == 'd') { p1->set_location(c3); game1->printLocation();}
				if (choice == 'e') { p1->set_location(c4); game1->printLocation();}
				if (choice == 'f') { p1->set_location(c5); game1->printLocation();}
				if (choice == 'g') { p1->set_location(c6); game1->printLocation();}
				if (choice == 'h') { p1->set_location(cop); game1->printLocation();}
				if (choice == 'i') { p1->set_location(stor); game1->printLocation();}
				if (choice == 'j') { p1->set_location(E); game1->printLocation(); }
				if (choice == 'k') { p1->set_location(lobby); game1->printLocation();}
				if (choice == 'q') { choice = 'q'; }
			}
			// ****************************************************		actions from Lobby
			if ((game1->in_lob()))
			{	// show Lobby Actions
				cout << endl;
				cout << "Choose an action:" << endl;
				cout << "\t(a) Inspect" << endl;
				cout << "\t(b) Chat with Receptionist" << endl;
				cout << "\t(c) Go back to hallway" << endl;
				cout << "\t(q) Quit work, and walk out..." << endl;
				cin >> choice;
				cin.ignore();
				// Execute Lobby Actions
				if (choice == 'a') { p1->get_location()->inspect(game1->get_ventsON()); }
				if (choice == 'b') { p1->get_location()->chat(); }
				if (choice == 'c') { p1->set_location(hall1); game1->printLocation(); }
				if (choice == 'q') { choice = 'q'; }
			}
			// ****************************************************		actions from Storage
			if ((game1->in_stor()))
			{	// show Storage Actions
				cout << endl;
				cout << "Choose an action:" << endl;
				cout << "\t(a) Inspect" << endl;
				cout << "\t(b) Pick Up Object" << endl;
				cout << "\t(c) Go back to hallway" << endl;
				cin >> choice;
				cin.ignore();
				// Execute Storage Actions
				if (choice == 'a') { p1->get_location()->inspect(game1->get_ventsON()); }
				if (choice == 'b') { p1->takeSword(); }
				if (choice == 'c') { p1->set_location(hall1); game1->printLocation();}
				if (choice == 'q') { choice = 'q'; }
			}
			// ****************************************************		actions from Copy
			if ((game1->in_copy()))
			{	// show Copy Actions
				cout << endl;
				cout << "Choose an action:" << endl;
				cout << "\t(a) Inspect" << endl;
				cout << "\t(b) Use Copy Machine" << endl;
				cout << "\t(c) Go back to hallway" << endl;
				cin >> choice;
				cin.ignore();
				// Execute Copy Actions
				if (choice == 'a') { p1->get_location()->inspect(game1->get_ventsON()); }
				if (choice == 'b') { p1->get_location()->copyMachine(); }
				if (choice == 'c') { p1->set_location(hall1); game1->printLocation();}
				if (choice == 'q') { choice = 'q'; }
			}
			// ****************************************************		actions from Elec
			if ((game1->in_elec()))
			{	// show Elec Actions
				cout << endl;
				cout << "Choose an action:" << endl;
				cout << "\t(a) Inspect" << endl;
				cout << "\t(b) Flip Light Switch" << endl;
				cout << "\t(c) Flip Vent Switch" << endl;
				cout << "\t(d) Go back to hallway" << endl;
				cin >> choice;
				cin.ignore();
				// Execute Elec Actions
				if (choice == 'a') 
				{ 
					p1->get_location()->inspect(game1->get_ventsON()); 
					cout << "Light indicator shows: " << game1->get_lightsON() << endl;
					cout << "Vents indicator shows: " << game1->get_ventsON() << endl;
				}
				if (choice == 'b') { game1->set_lightSWITCH(); }
				if (choice == 'c') { game1->set_ventSWITCH(); }
				if (choice == 'd') { p1->set_location(hall1); game1->printLocation(); }
				if (choice == 'q') { choice = 'q'; }
			}

			game1->set_blade_scare();
				
		} while ( (choice != 'q') && (!(game1->get_BadKill())) && (!(game1->get_win())) && (!(game1->get_blade_scare())) );



		if (game1->get_blade_scare())
		{
			cout << endl;
			cout << "You were seen wielding a katana in the office." << endl;
			cout << "Security has tasered and detained you." << endl;
			cout << endl;
			cout << "GAME OVER" << endl;
			cout << endl;
		}
			
		if (game1->get_BadKill())
		{
			cout << endl;
			cout << "You were seen assaulting a co-worker." << endl;
			cout << "Security has tasered and detained you." << endl;
			cout << endl;
			cout << "GAME OVER" << endl;
			cout << endl;
		}

		if (game1->get_win())
		{
			cout << endl;
			cout << "VICTORY" << endl;
			cout << "give yourself a pat on the back." << endl;
			cout << "The, raise both hands, " << endl;
			cout << "and have your left hand high five your right hand..." << endl;
			cout << endl;
			cout << "GAME OVER" << endl;
			cout << endl;
		}




		cout << endl << "Would you like to play again? (y/n):" << endl;
		cout << "Enter 'n' to quit" << endl;
		cin >> again;
		cin.ignore();


	} while (again != 'n');






}





#endif // !PLAYLOOP_HPP
