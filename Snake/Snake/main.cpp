#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH 500
#define WINDOW_HEIGH 500

int main()
{
	sf::RenderWindow window(sf::VideoMode( WINDOW_WIDTH, WINDOW_HEIGH), "SNAKE!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

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
		window.display();
	}

	return 0;
}