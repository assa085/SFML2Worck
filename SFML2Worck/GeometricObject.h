#pragma once
#include <SFML/Graphics.hpp>
#include <list>
class GeometricObject
{
public:
	GeometricObject(sf::RenderWindow* win);

	sf::RectangleShape setLine(float x, float y, float size0, float size1);

	void line(float x, float y, float size0, float size1);
	void lineRotate(float rotate, float x, float y, float size0, float size1);
	sf::CircleShape triangle(float rotate, float x, float size0, float size1);
	sf::RectangleShape setLineRotate(float rotate, float x, float y, float size0, float size1);
	sf::CircleShape setCircle(float rotate, float x, float y, float size0, float size1);
	sf::RenderWindow* getWin();
private:
	sf::RenderWindow* window;
	
};

