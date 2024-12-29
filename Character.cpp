#include "Character.h";

Character::Character(std::string name, int health, int mana, int defence, int strength, int agility, int intelligence, Specs spec)
	: name(name), health(health), mana(mana), defence(defence), strength(strength), agility(agility), intelligence(intelligence), spec(spec)
{
};

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
	for (int i = 0; i < charNumb; i++)
	{
		std::cout << "Enter a name " << std::endl;
		std::cin >> name;

		std::cout << "Choose a specialiaztion " << std::endl;
		std::cout << "1: Warrior" << "\n" << "2: Thief" << "\n" << "3: Mage" << std::endl;
		std::cin >> specChoice;

		if (specChoice < 1 || specChoice > 3) {
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
			characters.push_back(newChar);
		}
		else {
			baseHealth = 28;
			baseMana = 30;
			baseStrength = 5;
			baseAgility = 10;
			baseIntelligence = 20;
			baseDefence = 2;

			Character newChar(name, baseHealth, baseMana, baseDefence, baseStrength, baseAgility, baseIntelligence, MAGE);
			characters.push_back(newChar);
		}
	}
	return characters;

};