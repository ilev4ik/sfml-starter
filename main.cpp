#include "config.h"
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "Version " << sfmlstarter_VERSION_MAJOR << "." << sfmlstarter_VERSION_MINOR << endl;

    sf::Window App(sf::VideoMode(800, 600), "sfmlstarter");

    while (App.isOpen())
    {
        sf::Event Event;
        while (App.pollEvent(Event))
        {
            if (Event.type == sf::Event::Closed)
                App.close();
        }
        App.display();
    }

    return 0;
}