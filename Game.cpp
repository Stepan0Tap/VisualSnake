#include "Game.h"

Game::Game()
{
	running = true;
	gamemode = MENU;
}

void Game::handleInput()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();
	}
}

void Game::update()
{
	Game::handleInput();
}