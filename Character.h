#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
#include "Move.h"
#include <string>
#include <iostream>
#include <vector>

// Class will be defined later
class Move;

enum Specs {
	WARRIOR = 1,
	THIEF,
	COMBAT_MAGE,
	HEALER
};

class Character {
private:
public:
	std::string name;
	int health, mana, defence, strength, agility, intelligence;
	Specs spec;
	std::vector<Move*> moves;
	Character(std::string name, int health, int mana, int defence, int strength, int agility, int intelligence, Specs spec);
	void getClass(Specs spec);
	void addMoves(Move* move);
	std::vector<Character> createChar();
};

#endif 
