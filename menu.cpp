#include "menu.h"


Menu::Menu()
	: mWindow(sf::VideoMode(640, 800), "VisualSnake") 
{

}

int Menu::open()
{
	while (mWindow.isOpen())
	{
		processEvents();
		render();
	}
	return 0;
}

void Menu::render()
{
	mWindow.clear();
	mWindow.draw(heading);
	mWindow.display();
}

void Menu::processEvents()
{
	sf::Event event;
	while (mWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			mWindow.close();
	}
}

sf::Text Menu::createHeading(std::string text)
{
	sf::Font headingFont;
	headingFont.loadFromFile("resources/fonts/Decrypted.ttf");
	sf::Text heading;
	heading.setFont(headingFont);
	heading.setString(text);
	heading.setCharacterSize(24);
	heading.setFillColor(sf::Color::White);
	return heading;
}