#include "Floor.h"


void Floor::updateFloor(sf::RenderWindow* window)
{
	for (int i = 0; i < rowsCount; i++) {
		for (int j = 0; j < colCount; j++) {
			sf::RectangleShape rect(sf::Vector2f((float)colWidth, (float)rowHeight));
			rect.setPosition((float)(j*colWidth), (float)(i*rowHeight));
			rect.setFillColor(sf::Color::Transparent);
			rect.setOutlineThickness(1);
			rect.setOutlineColor(sf::Color::White);
			window->draw(rect);
		}
	}
	snakeHead->update();
	snakeHead->move();
	snakeHead->draw(window);
}

Floor::Floor(int width, int height, int rows)
{
	this->width = width;
	this->height = height;
	this->rowsCount = rows;
	colCount = rowsCount;
	colWidth = width / rowsCount;
	rowHeight = height / rowsCount;
	snakeHead = new Snake(rowsCount, colCount, rowHeight, colWidth, 8);
}


Floor::~Floor()
{
	delete snakeHead;
}
