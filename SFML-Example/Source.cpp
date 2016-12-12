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

	//main game loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		sf::Time currentDt = deltaTime.restart();
		
		//this will update all gameobjects in vector
		for (std::vector<GameObject*>::iterator it = gameObjects.begin(); it != gameObjects.end(); it++)
		{
			(*it)->update(currentDt);
			(*it)->draw(window);
		}

		window.display();
	}

	return 0;
}