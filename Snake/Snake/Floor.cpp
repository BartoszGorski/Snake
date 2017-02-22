#include "Floor.h"


void Floor::makeFloor(sf::RenderWindow& window)
{
	for (int i = 0; i < rowsCount; i++) {
		for (int j = 0; j < colCount; j++) {
			sf::RectangleShape rect(sf::Vector2f((float)colWidth, (float)rowHeight));
			rect.setPosition((float)(j*colWidth), (float)(i*rowHeight));
			rect.setFillColor(sf::Color::Transparent);
			rect.setOutlineThickness(1);
			rect.setOutlineColor(sf::Color::White);
			window.draw(rect);
		}
	}
}

Floor::Floor(int w, int h, int rows)
{
	this->width = w;
	this->height = h;
	this->rowsCount = rows;
	colCount = rowsCount;
	colWidth = width / rowsCount;
	rowHeight = height / rowsCount;
	
}


Floor::~Floor()
{
}
