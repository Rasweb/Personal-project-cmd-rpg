#include "Game.h"
#include "Character.h"

Game::Game() {};

void Game::startGame() {
	std::cout << "Welcome to the character creation screen" << std::endl;
	//std::vector<Character> characters;
	std::vector<Character> characters;
	// Loop through and create characters and add them to the vector

};

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
	if (choice >= 1 && choice <= 2) {
		switch (choice)
		{
		case 1:
			startGame();
			break;
		case 2:
			std::cout << "Goodbye "<< std::endl;
			break;
		default:
			break;
		}
	}

};