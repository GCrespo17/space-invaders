#include <iostream>
#include "SFML/Graphics.hpp"

int main(){
    

    //Create main window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");

    while(window.isOpen()){
        //Process events
        while(const std::optional event = window.pollEvent()){
            if(event->is<sf::Event::Closed>()){
                window.close();
            }
        }

        window.clear(sf::Color::Black);

    }
    
    return 0;
}