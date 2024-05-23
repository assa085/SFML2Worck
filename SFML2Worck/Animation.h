#pragma once
#include"GeometricObject.h"
class Animation
{
public:

	Animation(GeometricObject* Go) : geometricObject(Go), win(geometricObject->getWin()) {}
	void movementLine(sf::RectangleShape& designerTriangle, float x_, float y_);
	GeometricObject* SetGeometricObject();

private:
	GeometricObject* geometricObject;
	sf::RenderWindow* win;
};

