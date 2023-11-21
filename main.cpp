#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "menu.h"
#include "GUI.h"

int main()
{
	//Menu menu;
	//menu.open();
	sf::RenderWindow window(sf::VideoMode(640, 800), "VisualSnake");
	//GUI gui;
	//sf::Text heading = gui.createHeading();
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		//window.draw(heading);
		window.display();
	}
}