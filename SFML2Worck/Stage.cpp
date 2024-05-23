#pragma once
#include "Stage.h"
#include <thread>
#include "windows.h"

void Stage::Start() {
    while (true) {
        x0();
        x1();
        x2();
    }
}
void Stage::x0()
{
     sf::RectangleShape geometricShape = geometri->setLine(20, 20, 200, 100);
     animation->movementLine(geometricShape, 600, 600);
     geometricShape = geometri->setLine(50, 80, 600, 600);
     animation->movementLine(geometricShape, 1, 1);
    
}
void Stage::x1() {
    sf::CircleShape shape = geometri->setCircle(0,20, 20, 200, 100);
    animation->movementCircle(shape, 600, 600,0);
    shape = geometri->setCircle(5,50, 80, 600, 600);
    animation->movementCircle(shape, 1, 1, 0);
    
}
void Stage::x2() {
    sf::CircleShape tr = geometri->triangle(20, 20, 200, 100);
    animation->movementTriangle(tr, 600, 600, 0);
    tr = geometri->triangle(5, 50, 80, 600);
    animation->movementTriangle(tr, 1, 1, 0);
}


void Stage::SetAnimation(Animation* ani) {
	this->animation = ani;
}
void Stage::SetGeometri(GeometricObject* geo) {
	this->geometri = geo;
}
void Stage::SetAnimationInGeometri(Animation* ani) {
	this->animation = ani;
	this->geometri = animation->SetGeometricObject();
}