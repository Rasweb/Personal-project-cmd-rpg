#include "Game.h"
#include "Character.h"
#include "Move.h"

Game::Game() {};

void Game::startMenu() {
	std::cout << "Welcome to my cmd rpg" << std::endl;
	std::cout << "1: Start game" << std::endl;
	std::cout << "2: Quit game" << std::endl;

	int choice;

	while (1) {
		std::cout << "What would you like to do?" << std::endl;
		std::cin >> choice;

		if (std::cin.fail() || choice <= 0 || choice >= 3) {
			std::cout << "Wrong choice, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}
		else {
			break;
		}
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
std::vector<Character> Game::createCharacters() {
	std::vector<Character> s;
	Character templateChar("", 0, 0, 0, 0, 0, 0, WARRIOR);

	std::vector<Character> chars;

	chars = templateChar.createChar();


	for (int i = 0; i < chars.size(); i++)
	{
		std::cout << "\n";
		std::cout << "Name: " << chars[i].name << std::endl;
		templateChar.specCheck(chars, i);
		std::cout << "Moves: " << std::endl;
		templateChar.displayMoves(chars, i);
	}
	return chars;
}

void Game::inGameMenu(std::vector<Character> chars) {
	std::cout << "\nWelcome to the game:" << std::endl;
	std::cout << "1: Battle" << std::endl;
	std::cout << "2: Inventory" << std::endl;
	std::cout << "3: Stats" << std::endl;
	std::cout << "4: Save game" << std::endl;
	std::cout << "5: Quit game" << std::endl;

	int choice;

	while (1) {
		std::cout << "What would you like to do?" << std::endl;
		std::cin >> choice;

		if (std::cin.fail() || choice <= 0 || choice >= 6) {
			std::cout << "Wrong choice, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}
		else {
			break;
		}
	}

	std::string fileName = "test.txt";

	if (choice >= 1 || choice <= 5) {
		switch (choice)
		{
		case 1:
			std::cout << "Finding a battle" << std::endl;
			break;
		case 2:
			std::cout << "Showing inventory" << std::endl;
			break;
		case 3:
			std::cout << "Showing stats." << std::endl;
			break;
		//https://cplusplus.com/doc/tutorial/files/
		case 4:
			savingToTextFile(chars, fileName);
			std::cout << "Saving game." << std::endl;
			break;
		case 5:
			std::cout << "Quiting game, Goodbye!" << std::endl;
			break;
		default:
			break;
		}
	}
}
void Game::loadingFromTextFile(std::string fileName) {
	std::string line;
	std::ifstream myfile(fileName);
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			std::cout << line << std::endl;
		}
		myfile.close();
	}
	else
		std::cout << "Error opening file!" << std::endl;
}

void Game::savingToTextFile(std::vector<Character> chars, std::string fileName) {
	std::ofstream myfile;
	myfile.open(fileName);

	myfile << "Characters: " << std::endl;
	for (int i = 0; i < chars.size(); i++)
	{
		myfile << "\nChar: " << i + 1 << std::endl;
		myfile << "Name: " << chars[i].name << std::endl;
		myfile << "Spec: " << chars[i].spec << std::endl;
	}
	myfile.close();
}
void Game::startGame() {
	std::vector<Character> chars = createCharacters();
	inGameMenu(chars);

	/*Basic plot:
	* Land where enemies roam.
	* Enemy - Evil empire.
	* Characters: user choosen.
	* Plot, become stronger defeat leader of empire
	* 
	*/
};

