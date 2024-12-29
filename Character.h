#pragma once
#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include <iostream>
#include <vector>

enum Specs {
	WARRIOR = 1,
	THIEF,
	MAGE
};

class Character {
private:
public:
	std::string name;
	int health, mana, defence, strength, agility, intelligence;
	Specs spec;
	Character(std::string name, int health, int mana, int defence, int strength, int agility, int intelligence, Specs spec);
	std::vector<Character> createChar();
};

#endif 
