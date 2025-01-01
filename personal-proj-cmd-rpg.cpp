#include "Game.h"
/*
https://finalfantasy.fandom.com/wiki/Category:Final_Fantasy
https://finalfantasy.fandom.com/wiki/Battle_system
https://finalfantasy.fandom.com/wiki/Category:Abilities_in_Final_Fantasy
https://finalfantasy.fandom.com/wiki/Final_Fantasy_jobs
C++ rpg project:


// Damage:
Physical damage = strength * weapon power - defence (target defence)
Magic Damage = intelligence * spell power - defebce (target defence)

Warrior:
Attack: Basic physical attack.
Defend: Reduces damage taken in the next turn.
Use Items: Can use healing items or other consumables.

Thief:
Attack: Basic physical attack, often with a higher chance to land critical hits.
Flee: Increased chance to escape from battles.

Combat Mage :
Fire, Ice, Lightning Spells: Basic elemental magic attacks.
Use Items: Can use items.

Healer:
Heal Spells: Heal allies or remove negative status effects.
Protect Spells: Buff allies with defensive spells.
Use Items: Can use items.

class Character{
private:
	string name;
	int health;
	int defence;
// * Adding a lvl system later on for character and enemy
//	int lvl;
//	int experience
public:
}

class Enemy{
	string name;
	int hp;
	int defence;
}

class Classes{
	string name;
}

enum ClassTypes{
	// Fighter: start - 35 HP / 10 Damage, Thief: start - 30 HP / 2 Damage, Mage: start -  28 HP / 2 Damage 
}

class Attack{
	string name;
	type;
	// Type: fight, run, magic, drink, item
}

enum AttackTypes{
	Fight,
	Run,
	// Later on: magic, drink, item
}

class Battle{}

 class Game{
// input handling, output display, game loop, menus, game state
}

*/
#include <iostream>

int main()
{
	Game newTest;
	newTest.startMenu();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
