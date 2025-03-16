#pragma once
#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <fstream>

class Character;

class Game{
private:
public:
	Game();
	void startMenu();
	void startGame();
	std::vector<Character> createCharacters();
	void inGameMenu(std::vector<Character> chars);
	void savingToTextFile(std::vector<Character> chars, std::string fileName);
	void loadingFromTextFile(std::string fileName);
};

#endif

