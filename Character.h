#pragma once
#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <iostream>
#include "specialization.h"

class Character {
private:
	std::string name;
	int health;
	int mana;
	int defence;
	// For warrior
	int strength;
	// for theif
	int agility;
	// for mage
	int intelligence;
	Specialization spec;
public:
	Character(std::string name, int health, int mana, int defence, int stength, int agility, int intelligence, Specialization spec);
};

#endif 
