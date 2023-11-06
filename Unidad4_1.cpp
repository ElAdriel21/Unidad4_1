#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "1");

    sf::Texture texture1;

    texture1.loadFromFile("crosshair.png");
    sf::Sprite sprite1(texture1);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        sprite1.setPosition(180, 180);
        window.draw(sprite1);

        window.display();
    }
}

