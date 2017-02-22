#pragma once

#include <SFML\Graphics.hpp>

class Floor
{
private:
	int width, height, rowsCount, colCount, colWidth, rowHeight;
	
public:
	void makeFloor(sf::RenderWindow&);
	
	Floor(int,int,int);
	~Floor();
};

