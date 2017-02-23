#pragma once

#include <SFML\Graphics.hpp>
#include "Snake.h"


class Floor
{
private:
	int width, height, rowsCount, colCount, colWidth, rowHeight;
	Snake *snakeHead;
public:
	void updateFloor(sf::RenderWindow*);
	
	Floor(int width, int height, int rows);
	~Floor();
};

