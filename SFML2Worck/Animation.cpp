#pragma once
#include "Animation.h"

void Animation::movementLine(sf::RectangleShape& designerTriangle, float x_, float y_) {

    sf::Clock clock;
    float x = designerTriangle.getPosition().x;
    float y = designerTriangle.getPosition().y;
    float time = clock.getElapsedTime().asMicroseconds() / 60;

    const float speed = 0.09f;  // Скорость движения (можете подобрать подходящее значение)
    float distanceX = x_ - x;
    float distanceY = y_ - y;
    float distanceTotal = std::hypot(distanceX, distanceY);

    while (distanceTotal > 0.1f) {  // Условие завершения цикла
        float deltaX = speed * distanceX / distanceTotal;
        float deltaY = speed * distanceY / distanceTotal;

        designerTriangle.move(deltaX * time, deltaY * time);
        x = designerTriangle.getPosition().x;
        y = designerTriangle.getPosition().y;

        win->clear(sf::Color::White);
        win->draw(designerTriangle);
        win->display();

        distanceX = x_ - x;
        distanceY = y_ - y;
        distanceTotal = std::hypot(distanceX, distanceY);

        time = clock.restart().asMicroseconds() / 60;
    }

    designerTriangle.setPosition(x_, y_);  // Устанавливаем точное положение на конечных координатах
    win->draw(designerTriangle);
    win->display();
   
}

void Animation::movementCircle(sf::CircleShape& designerTriangle, float x_, float y_,float rotation) {
    sf::Clock clock;
    float x = designerTriangle.getPosition().x;
    float y = designerTriangle.getPosition().y;
    float time = clock.getElapsedTime().asMicroseconds() / 60;

    const float speed = 0.09f;  // Скорость движения (можете подобрать подходящее значение)
    float distanceX = x_ - x;
    float distanceY = y_ - y;
    float distanceTotal = std::hypot(distanceX, distanceY);

    while (distanceTotal > 0.1f) {  // Условие завершения цикла
        float deltaX = speed * distanceX / distanceTotal;
        float deltaY = speed * distanceY / distanceTotal;

        designerTriangle.move(deltaX * time, deltaY * time);
        x = designerTriangle.getPosition().x;
        y = designerTriangle.getPosition().y;

        win->clear(sf::Color::White);
        win->draw(designerTriangle);
        win->display();

        distanceX = x_ - x;
        distanceY = y_ - y;
        distanceTotal = std::hypot(distanceX, distanceY);

        time = clock.restart().asMicroseconds() / 60;
    }
}
void Animation::movementTriangle(sf::CircleShape& designerTriangle, float x_, float y_, float rotation) {
    sf::Clock clock;
    float x = designerTriangle.getPosition().x;
    float y = designerTriangle.getPosition().y;
    float time = clock.getElapsedTime().asMicroseconds() / 60;

    const float speed = 0.09f;  // Скорость движения (можете подобрать подходящее значение)
    float distanceX = x_ - x;
    float distanceY = y_ - y;
    float distanceTotal = std::hypot(distanceX, distanceY);

    while (distanceTotal > 0.1f) {  // Условие завершения цикла
        float deltaX = speed * distanceX / distanceTotal;
        float deltaY = speed * distanceY / distanceTotal;
        
        designerTriangle.setRotation(rotation +=0.1);
        designerTriangle.move(deltaX * time, deltaY * time);
        x = designerTriangle.getPosition().x;
        y = designerTriangle.getPosition().y;

        win->clear(sf::Color::White);
        win->draw(designerTriangle);
        win->display();

        distanceX = x_ - x;
        distanceY = y_ - y;
        distanceTotal = std::hypot(distanceX, distanceY);

        time = clock.restart().asMicroseconds() / 60;
    }
}

GeometricObject* Animation::SetGeometricObject() {
	return geometricObject;
}
double customRound(double value, int decimalDigits) {
    double factor = std::pow(10, decimalDigits);
    return std::round(value * factor) / factor;
}
