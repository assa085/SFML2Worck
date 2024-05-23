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
sf::RectangleShape setLineRotate(float rotate, float x, float y, float size0, float size1) {
	sf::RectangleShape line(sf::Vector2f(x, y));
	line.setFillColor(sf::Color(100, 250, 50));
	line.rotate(rotate);
	line.setPosition(size0, size1);

	return line;
}
sf::CircleShape setTriangle(float rotate, float x, float y, float size0, float size1) {
	sf::CircleShape triangle(x, y);
	triangle.setFillColor(sf::Color(100, 250, 50));
	triangle.rotate(rotate);
	triangle.setPosition(size0, size1);

	return triangle;
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
void GeometricObject::triangle(float rotate, float x, float y, float size0, float size1) {
	sf::CircleShape triangle(x, y);
	triangle.setFillColor(sf::Color(100, 250, 50));
	triangle.rotate(rotate);
	triangle.setPosition(size0, size1);
	window->draw(triangle);
}
void GeometricObject::listAddLine(float x, float y, float size0, float size1) {
	sf::RectangleShape line(sf::Vector2f(x, y));
	line.setFillColor(sf::Color(100, 250, 50));
	/*line.rotate();*/
	line.setPosition(size0, size1);
	listRectangleShape.push_back(line);
}
sf::RectangleShape GeometricObject::getInListTexture(int i) {
	auto it = listRectangleShape.begin();
	std::advance(it, i);
	return *it;
}
sf::RenderWindow* GeometricObject::getWin() {
	return this->window;
}
