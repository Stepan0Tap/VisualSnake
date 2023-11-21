#include "GUI.h"

sf::Text GUI::createHeading()
{
	sf::Text heading;
	sf::Font font;
	font.loadFromFile("resources\\fonts\\Decrypted.ttf");
	heading.setString("main menu");
	heading.setFont(font);
	heading.setCharacterSize(20);
	heading.setFillColor(sf::Color::White);
	return heading;
}