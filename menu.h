#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Menu
{
private:
	enum Positions {IDLE, PLAY, SETTINGS, EXIT};
	Positions pos = IDLE;

	bool is_open = true;

	sf::RenderWindow mWindow;

	sf::Text heading = createHeading("VisualSnake");

public:
	Menu();
	//~Menu();

	int open();

	void processEvents();
	void render();

	//void move(int direction);
	//Positions choose();

	sf::Text createHeading(std::string text);
};