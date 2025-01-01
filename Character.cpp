#include "Character.h"

Character::Character(std::string name, int health, int mana, int defence, int strength, int agility, int intelligence, Specs spec)
	: name(name), health(health), mana(mana), defence(defence), strength(strength), agility(agility), intelligence(intelligence), spec(spec), moves(moves)
{};

void Character::getClass(Specs spec){
	switch (spec)
	{
	case WARRIOR:
		break;
	case THIEF:
		break;
	case COMBAT_MAGE:
		break;
	case HEALER:
		break;
	default:
		break;
	}
}

void Character::addMoves(Move* move){
	moves.push_back(move);
}

std::vector<Character> Character::createChar() {
	std::cout << "Welcome to the character creation screen" << std::endl;
	std::vector<Character> characters;

	int charNumb;
	std::cout << "How many characters do you want to create?(1-4)" << std::endl;
	std::cin >> charNumb;
	while (charNumb <= 0 || charNumb >= 5) {

		std::cout << "Invalid number, must be between 1 and 4" << std::endl;
		std::cout << "Try again: ";
		std::cin >> charNumb;
	}


	std::string name;
	int specChoice, baseHealth, baseMana, baseStrength, baseAgility, baseIntelligence, baseDefence;

	Move WrMove1("Strike", SINGLE);
	Move WrMove3("Shield Block", BLOCK);
	Move WrMove2("Cleave", MULTIPLE);

	Move TfMove1("Backstab", SINGLE);
	Move TfMove3("Flurry of Blows", MULTIPLE);
	Move TfMove2("Dodge", BLOCK);

	Move CmMove1("Firebolt", SINGLE);
	Move CmMove3("Chain Lightning", MULTIPLE);
	Move CmMove2("Magical Barrier", BLOCK);

	Move HrMove1("Holy Smite", SINGLE);
	Move HrMove2("Protective Ward", BLOCK);
	Move HrMove3("Area Heal", MULTIPLE);

	for (int i = 0; i < charNumb; i++)
	{
		std::cout << "Enter a name " << std::endl;
		std::cin >> name;

		std::cout << "Choose a specialiaztion " << std::endl;
		std::cout << "1: Warrior" << "\n" << "2: Thief" << "\n" << "3: Combat Mage" << "\n" << "4: Healer" << std::endl;
		std::cin >> specChoice;

		if (specChoice < 1 || specChoice > 4) {
			std::cout << "That option dosent exist" << std::endl;
		}
		enum Spec s = static_cast<Spec>(specChoice);

		if (s == 1) {
			baseHealth = 35;
			baseMana = 10;
			baseStrength = 20;
			baseAgility = 15;
			baseIntelligence = 5;
			baseDefence = 10;

			Character newChar(name, baseHealth, baseMana, baseDefence, baseStrength, baseAgility, baseIntelligence, WARRIOR);
			
			newChar.addMoves(&WrMove1);
			newChar.addMoves(&WrMove2);
			newChar.addMoves(&WrMove3);


			characters.push_back(newChar);

		}
		else if (s == 2) {
			baseHealth = 30;
			baseMana = 12;
			baseStrength = 15;
			baseAgility = 20;
			baseIntelligence = 8;
			baseDefence = 5;

			Character newChar(name, baseHealth, baseMana, baseDefence, baseStrength, baseAgility, baseIntelligence, THIEF);
			newChar.addMoves(&TfMove1);
			newChar.addMoves(&TfMove2);
			newChar.addMoves(&TfMove3);
			characters.push_back(newChar);
		}
		else if(s == 3) {
			baseHealth = 28;
			baseMana = 30;
			baseStrength = 5;
			baseAgility = 10;
			baseIntelligence = 20;
			baseDefence = 2;

			Character newChar(name, baseHealth, baseMana, baseDefence, baseStrength, baseAgility, baseIntelligence, COMBAT_MAGE);
			newChar.addMoves(&CmMove1);
			newChar.addMoves(&CmMove2);
			newChar.addMoves(&CmMove3);
			characters.push_back(newChar);
		}
		else {
			baseHealth = 30;
			baseMana = 28;
			baseStrength = 5;
			baseAgility = 10;
			baseIntelligence = 18;
			baseDefence = 3;

			Character newChar(name, baseHealth, baseMana, baseDefence, baseStrength, baseAgility, baseIntelligence, HEALER);
			newChar.addMoves(&HrMove1);
			newChar.addMoves(&HrMove2);
			newChar.addMoves(&HrMove3);
			characters.push_back(newChar);

		}
	}
	return characters;

};