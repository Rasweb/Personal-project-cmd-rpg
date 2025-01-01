#pragma once
#ifndef MOVE_H
#define MOVE_H
#include "Character.h"
#include <string>

// Class will be defined later
class Character;

enum Types {
	SINGLE = 1,
	MULTIPLE,
	BLOCK
};

class Move {
private:

public:
	Types type;
	std::string name;
	Move(std::string name, Types type);

	void calculateDamage(Character* attacker, Character* defender);

	//  TODO: 
	// Create a get move name fun to display the current move

};

#endif

