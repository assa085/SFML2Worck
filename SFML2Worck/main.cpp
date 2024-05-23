#pragma once

#include "Animation.h"
#include "GeometricObject.h"
#include "Stage.h"

int main()
{

    sf::RenderWindow window(sf::VideoMode(640, 640), "SFML works!");
    GeometricObject geometricObject(&window);
    Animation animation(&geometricObject);
    Stage stage;
    stage.SetAnimationInGeometri(&animation);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

       stage.Start();
        
    }
    
    return 0;
}