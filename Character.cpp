#include "Character.h";

Character::Character(std::string name, int health, int mana, int defence, int stength, int agility, int intelligence, Specialization spec)
	: name(name), health(health), mana(mana), defence(defence), strength(strength), agility(agility), intelligence(intelligence), spec(spec)
{};