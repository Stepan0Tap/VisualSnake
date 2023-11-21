#pragma once
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "menu.h"

class Game
{
public:
	Game();
	void handleInput();
	void update();
	void render();
private:
	bool running;
	enum Gamemode {MENU,GAME};
	Gamemode gamemode;

	sf::RenderWindow window;
	Menu menu;
};

