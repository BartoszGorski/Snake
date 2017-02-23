#pragma once
#include <SFML\Graphics.hpp>

class Snake
{
private:
	int rowsAmount, colsAmount, currentRow, currentCol, rowHeight, colWidth, speed, speedCount;
	char direction;
public:
	void update();
	void move();
	void draw(sf::RenderWindow *);

	Snake(int rows, int cols, int rowHeight, int colWidth, int speed);
	~Snake();
};

