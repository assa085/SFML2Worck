#pragma once
#include"GeometricObject.h"
class Animation
{
public:

	Animation(GeometricObject* Go) : geometricObject(Go), win(geometricObject->getWin()) {}
	void movementLine(sf::RectangleShape& designerTriangle, float x_, float y_);
	void movementCircle(sf::CircleShape& designerTriangle, float x_, float y_,float rotation);
	void movementTriangle(sf::CircleShape& designerTriangle, float x_, float y_, float rotation);
	GeometricObject* SetGeometricObject();

private:
	GeometricObject* geometricObject;
	sf::RenderWindow* win;
};

