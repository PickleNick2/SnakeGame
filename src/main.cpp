#include <iostream>
#include <cstdlib>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main() {
    std::cout << "It works!\n";
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML works!");

    while (window.isOpen())
    {
        while (auto event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(sf::Color::Black);
        window.display();
    }
    
    return 0;
}