#pragma once
#include "Stage.h"
#include <thread>
#include "windows.h"

void Stage::Start() {
    std::thread th0(&Stage::x0, this);
    std::thread th1(&Stage::x1, this);
    th0.join();
    th1.join();

}
void Stage::x0()
{
    while (true)
    {
        sf::RectangleShape geometricShape = geometri->setLine(20, 20, 200, 100);
        animation->movementLine(geometricShape, 600, 600);
        geometricShape = geometri->setLine(50, 80, 600, 600);
        animation->movementLine(geometricShape, 1, 1);
    }
}
void Stage::x1() {
    while (true)
    {
        Sleep(20);
        sf::RectangleShape geometricShape = geometri->setLine(20, 20, 200, 100);
        animation->movementLine(geometricShape, 600, 600);
        geometricShape = geometri->setLine(50, 80, 600, 600);
        animation->movementLine(geometricShape, 1, 1);
    }
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