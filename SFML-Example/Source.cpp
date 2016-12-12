#include <SFML/Graphics.hpp>
#include <vector>
#include "GameObject.h"
#include "Player.h"
#include "Obstacle.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");

	sf::Texture playerTexture;
	playerTexture.loadFromFile("player.png");
	sf::Texture obsTexture;
	obsTexture.loadFromFile("obstacle.png");

	sf::Clock deltaTime;

	std::vector<GameObject*> gameObjects;
	gameObjects.push_back(new Player(playerTexture));
	gameObjects.push_back(new Obstacle(obsTexture));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			//check if we closed the game window
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		sf::Time currentDt = deltaTime.restart();
		
		//this is a unneccessary comment
		for (std::vector<GameObject*>::iterator it = gameObjects.begin(); it != gameObjects.end(); it++)
		{
			(*it)->update(currentDt);
			(*it)->draw(window);
		}

		window.display();
	}

	return 0;
}