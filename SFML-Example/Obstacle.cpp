#include "Obstacle.h"



Obstacle::Obstacle(sf::Texture& tex) : 
	GameObject(tex)
{
	move(0, 200);
}


Obstacle::~Obstacle()
{
}

void Obstacle::update(sf::Time deltaTime) {
	float dt = deltaTime.asSeconds();

	move(100 * dt, 0);

	sf::Vector2f currPos = getPosition();
	if (currPos.x > 640)
		setPosition(0, currPos.y);
}