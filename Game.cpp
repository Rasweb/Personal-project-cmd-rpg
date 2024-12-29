#include "Game.h"
#include "Character.h"

Game::Game() {};

void Game::startGame() {
	std::vector<Character> s;
	Character standard("", 0, 0, 0, 0, 0, 0, WARRIOR);

	std::vector<Character> chars;

	chars = standard.createChar();

	for (int i = 0; i < chars.size(); i++)
	{
		std::cout << "Name: " << chars[i].name << std::endl;
		std::cout << "Spec: " << chars[i].spec << std::endl;
	}

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