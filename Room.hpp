//
//  Room.hpp
//  projectFINAL
//
//  Created by Shy on 3/13/17.
//  Copyright © 2017 Shy. All rights reserved.
//

#ifndef Room_hpp
#define Room_hpp
#include <string>
#include <iostream>
#include <iostream>
#include <string>
using namespace std;


class Room
{
public:
	virtual void inspect(bool ventsON) { cout << "virtual" << endl; };				// VIRTUAL FUNCTION
	virtual void copyMachine() { cout << " virtual copy" << endl; }		// VIRTUAL FUNCTION
	virtual void chat() { cout << "virtual flirt" << endl; };			// VIRTUAL FUNCTION
//	virtual void take_sword() { cout << "virtual sword" << endl; };		// VIRTUAL FUNCTION
protected:
};





#endif /* Room_hpp */
