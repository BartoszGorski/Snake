#include "Snake.h"

void Snake::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		direction = 'u';
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		direction = 'd';
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		direction = 'l';
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		direction = 'r';
	}
}

void Snake::move()
{
	
	if (speedCount <= 0) {

		switch (direction) {
		case 'u':
			currentRow--;
			break;
		case 'd':
			currentRow++;
			break;
		case 'l':
			currentCol--;
			break;
		case 'r':
			currentCol++;
			break;
		default:
			currentRow--;
			break;
		}
		speedCount = 1000/speed;
	}
	speedCount--;
}

void Snake::draw(sf::RenderWindow *window)
{
	sf::RectangleShape snakeHead(sf::Vector2f((float)colWidth, (float)rowHeight));
	snakeHead.setPosition((float)currentCol*colWidth, (float)currentRow*rowHeight);
	//snakeHead.setOutlineThickness(1);
	//snakeHead.setOutlineColor(sf::Color::Red);
	snakeHead.setFillColor(sf::Color::Blue);
	window->draw(snakeHead);
}

Snake::Snake(int rows, int cols, int rowHeight, int colWidth, int speed)
{
	speedCount = 1000/speed;
	rowsAmount = rows;
	colsAmount = cols;
	currentCol = cols / 2;
	currentRow = rows / 2;
	direction = 'u';
	this->rowHeight = rowHeight;
	this->colWidth = colWidth;
	this->speed = speed;

}


Snake::~Snake()
{
}
