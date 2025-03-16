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

	while (1) {
		std::cout << "How many characters do you want to create?(1-4)" << std::endl;
		std::cin >> charNumb;

		if (std::cin.fail() || charNumb <= 0 || charNumb >= 5) {
			std::cout << "Wrong choice, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}
		else {
			break;
		}
	}

	std::string name;
	int specChoice, baseHealth, baseMana, baseStrength, baseAgility, baseIntelligence, baseDefence;

	for (int i = 0; i < charNumb; i++)
	{
		std::cout << "Enter a name " << std::endl;
		std::cin >> name;

		while (1) {
			std::cout << "Choose a specialiaztion " << std::endl;
			std::cout << "1: Warrior" << "\n" << "2: Thief" << "\n" << "3: Combat Mage" << "\n" << "4: Healer" << std::endl;
			std::cin >> specChoice;

			if (std::cin.fail() || specChoice < 1 || specChoice > 4) {
				std::cout << "Wrong choice, try again:" << std::endl;
				std::cin.clear();
				std::cin.ignore();
			}
			else {
				break;
			}
		}

		Specs s = static_cast<Specs>(specChoice);

		switch (s) {
		case WARRIOR:
			baseHealth = 35;
			baseMana = 10;
			baseStrength = 20;
			baseAgility = 15;
			baseIntelligence = 5;
			baseDefence = 10;
			break;
		case THIEF:
			baseHealth = 30;
			baseMana = 12;
			baseStrength = 15;
			baseAgility = 20;
			baseIntelligence = 8;
			baseDefence = 5;
			break;
		case COMBAT_MAGE:
			break;
		case HEALER:
			baseHealth = 28;
			baseMana = 30;
			baseStrength = 5;
			baseAgility = 10;
			baseIntelligence = 20;
			baseDefence = 2;
			break;
		}

		Character newChar(name, baseHealth, baseMana, baseDefence, baseStrength, baseAgility, baseIntelligence, s);

		switch (s)
		{
		case WARRIOR:
			newChar.addMoves(new Move("Strike", SINGLE));
			newChar.addMoves(new Move("Cleave", MULTIPLE));
			newChar.addMoves(new Move("Shield Block", BLOCK));
			break;
		case THIEF:
			newChar.addMoves(new Move("Backstab", SINGLE));
			newChar.addMoves(new Move("Flurry of Blows", MULTIPLE));
			newChar.addMoves(new Move("Dodge", BLOCK));
			break;
		case COMBAT_MAGE:
			newChar.addMoves(new Move("Firebolt", SINGLE));
			newChar.addMoves(new Move("Chain Lightning", MULTIPLE));
			newChar.addMoves(new Move("Magical Barrier", BLOCK));
			break;
		case HEALER:
			baseHealth = 30;
			baseMana = 28;
			baseStrength = 5;
			baseAgility = 10;
			baseIntelligence = 18;
			baseDefence = 3;
		
			newChar.addMoves(new Move("Holy Smite", SINGLE));
			newChar.addMoves(new Move("Protective Ward", MULTIPLE));
			newChar.addMoves(new Move("Area Heal", BLOCK));
			break;
		default:
			break;
		}
		characters.push_back(newChar);
	}
	return characters;

};

void Character::specCheck(std::vector<Character> chars, int index) {
	switch (chars[index].spec)
	{
	case WARRIOR:
		std::cout << "Spec: Warrior" << std::endl;
		break;
	case THIEF:
		std::cout << "Spec: Theif" << std::endl;
		break;
	case COMBAT_MAGE:
		std::cout << "Spec: Combat Mage" << std::endl;
		break;
	case HEALER:
		std::cout << "Spec: Healer" << std::endl;
		break;
	default:
		break;
	}
}

void Character::displayMoves(std::vector<Character> chars, int index){
	int size = chars[index].moves.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << chars[index].moves[i]->name << ", ";
		switch (chars[index].moves[i]->type)
		{
		case SINGLE:
			std::cout << "single attack" << std::endl;
			break;
		case MULTIPLE:
			std::cout << "multiple attack" << std::endl;
			break;
		case BLOCK:
			std::cout << "block" << std::endl;
			break;
		default:
			break;
		}
	}
}
