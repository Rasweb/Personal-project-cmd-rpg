#include "Game.h"
#include "Character.h"
#include "Move.h"

Game::Game() {};

void Game::startMenu() {
	std::cout << "Welcome to my cmd rpg" << std::endl;
	std::cout << "1: Start game" << std::endl;
	std::cout << "2: Quit game" << std::endl;

	int choice;
	std::cout << "What would you like to do?" << std::endl;
	std::cin >> choice;

	while (choice <= 0 || choice >= 3) {
		std::cout << "Wrong choice, try again:" << std::endl;
		std::cin >> choice;
	}
	if (choice >= 1 || choice <= 2) {
		switch (choice)
		{
		case 1:
			startGame();
			break;
		case 2:
			std::cout << "Goodbye " << std::endl;
			break;
		default:
			break;
		}
	}
};
void Game::createCharacters() {
	std::vector<Character> s;
	Character templateChar("", 0, 0, 0, 0, 0, 0, WARRIOR);

	std::vector<Character> chars;

	chars = templateChar.createChar();


	for (int i = 0; i < chars.size(); i++)
	{
		std::cout << "Name: " << chars[i].name << std::endl;
		std::cout << "\n";
		templateChar.specCheck(chars, i);
		std::cout << "\nMoves: " << std::endl;
		templateChar.displayMoves(chars, i);
	}
}

void Game::startGame() {
	createCharacters();

	// Introduction to the Game World
	// Combat system - battles happend in game at different times.

	/* Template story
	* Land: 
		- Fantasy_land
		- Different races (fantasy)
		- People live in denial of the empires true nature.
		- Believing that compliance will bring them peace.
	* Enemy: 
		- Empire seeking to conquer and enslave all.
		- forces the land into darkness and despair.
		- Enemy forces spread tyranny and oppresion
	* Main character: 
		- Humble peasant from poor village.
		- Life forever changed when village attacked and captured.
		- Forcing main character to take up arms and fight for peace
		- Ridiculed and mocked because of him warning of war.
		- Driven by commitment to preventing others from suffering
	* Antagonist:
		- Ruler of the evil empire.
		- Share similar back story with main character.
		- Once a victim of injustice and cruelty.
		- Seeks to inflict sufffering on others as a payback.
	* Companions:
		- Comp 1: Warrior
			- Realizes the truth of the empire, supports quickly.
			- Admires unwavering resolve and aids in rallying.
		- Comp 2: Theif
			- Sees the hope for a better tomorrow in main character
		- Comp 3: Healer: 
			- Guides character, emontionally and physically
			- Helps to inspire others with main characters unyieldign spirt.
	* Plot:
		1. Captivity
			- Protagonist is captured during raid.
			- Protagonist sprit is never broken
			- Protagonist draws strength from other prisoners sacrifces
			- Meets Comp 2, theif helps in escape.
		2. Return from captivity
			- Finds people living in denial of the empire
			- Ridiculed and attacked for warnings.
			- Remains steadfast in mission to expose truth and rally.
			- Meets Comp 1, Warrior, belives in protagonist, helps convince.
		3. Turning the Tide:
			- More people see the truth.
			- Public opinion changes
		4. The Gathering Storm
			- Attacks and defence are begining.
		5. Final Battle 
			- Boss battle
	*/


};

