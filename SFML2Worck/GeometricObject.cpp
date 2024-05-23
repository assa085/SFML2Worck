#pragma once
#include "GeometricObject.h"
GeometricObject::GeometricObject(sf::RenderWindow* win)
{
    this->window = win;
}
sf::RectangleShape GeometricObject::setLine(float x, float y, float size0, float size1)
{
    sf::RectangleShape line(sf::Vector2f(x, y));
    line.setFillColor(sf::Color(100, 250, 50));
    line.setPosition(size0, size1);

    return line;
}
sf::RectangleShape  GeometricObject::setLineRotate(float rotate, float x, float y, float size0, float size1) {
	sf::RectangleShape line(sf::Vector2f(x, y));
	line.setFillColor(sf::Color(100, 250, 50));
	line.rotate(rotate);
	line.setPosition(size0, size1);

	return line;
}
sf::CircleShape  GeometricObject::setCircle(float rotate, float x, float y, float size0, float size1) {
	sf::CircleShape circle(x, y);
	circle.setFillColor(sf::Color(100, 250, 50));
	circle.rotate(rotate);
	circle.setPosition(size0, size1);

	return circle;
}
void GeometricObject::line(float x, float y, float size0, float size1) {
	sf::RectangleShape line(sf::Vector2f(x, y));
	line.setFillColor(sf::Color(100, 250, 50));
	/*line.rotate();*/
	line.setPosition(size0, size1);
	window->draw(line);
}
void GeometricObject::lineRotate(float rotate, float x, float y, float size0, float size1) {
	sf::RectangleShape line(sf::Vector2f(x, y));
	line.setFillColor(sf::Color(100, 250, 50));
	line.rotate(rotate);
	line.setPosition(size0, size1);
	window->draw(line);
}
sf::CircleShape GeometricObject::triangle(float rotate, float x, float size0, float size1) {
	sf::CircleShape triangle(x, 3);
	triangle.setFillColor(sf::Color(100, 250, 50));
	triangle.rotate(rotate);
	triangle.setPosition(size0, size1);
	
	return triangle;
}

sf::RenderWindow* GeometricObject::getWin() {
	return this->window;
}
