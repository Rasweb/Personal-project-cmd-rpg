#include "Move.h"

Move::Move(std::string name, Types type) : name(name), type(type) {};

void Move::calculateDamage(Character* attacker, Character* defender) {
	std::cout << "spec" << attacker->spec << std::endl;
//Physical damage = strength * weapon power - defence(target defence)
//Magic Damage = intelligence * spell power - defebce(target defence)

};