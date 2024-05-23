#pragma once
#include "Animation.h"
#include <mutex>
void Animation::movementLine(sf::RectangleShape& designerTriangle, float x_, float y_) {
    std::mutex mx;
    sf::Clock clock;
    float x = designerTriangle.getPosition().x;
    float y = designerTriangle.getPosition().y;
    float time = clock.getElapsedTime().asMicroseconds() / 60;

    const float speed = 0.05f;  // �������� �������� (������ ��������� ���������� ��������)
    float distanceX = x_ - x;
    float distanceY = y_ - y;
    float distanceTotal = std::hypot(distanceX, distanceY);

    while (distanceTotal > 0.1f) {  // ������� ���������� �����
        float deltaX = speed * distanceX / distanceTotal;
        float deltaY = speed * distanceY / distanceTotal;

        designerTriangle.move(deltaX * time, deltaY * time);
        x = designerTriangle.getPosition().x;
        y = designerTriangle.getPosition().y;

        mx.lock();
        win->clear(sf::Color::White);
        win->draw(designerTriangle);
        win->display();
        mx.unlock();

        distanceX = x_ - x;
        distanceY = y_ - y;
        distanceTotal = std::hypot(distanceX, distanceY);

        time = clock.restart().asMicroseconds() / 60;
    }

    designerTriangle.setPosition(x_, y_);  // ������������� ������ ��������� �� �������� �����������
    win->draw(designerTriangle);
    win->display();
}

GeometricObject* Animation::SetGeometricObject() {
	return geometricObject;
}
double customRound(double value, int decimalDigits) {
    double factor = std::pow(10, decimalDigits);
    return std::round(value * factor) / factor;
}
