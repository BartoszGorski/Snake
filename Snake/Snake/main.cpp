#include <SFML/Graphics.hpp>
#include "Floor.h"

#define WINDOW_WIDTH 500
#define WINDOW_HEIGH 500
#define COLUMNS_AND_ROWS_AMOUNT 10

int main()
{
	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGH), "SNAKE!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	Floor floor(WINDOW_WIDTH, WINDOW_HEIGH, COLUMNS_AND_ROWS_AMOUNT);
	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		
		window.draw(shape);
		floor.makeFloor(window);
		window.display();
	}

	return 0;
}