#pragma once
#include "GameObject.h"
class Obstacle :
	public GameObject
{
public:
	Obstacle(sf::Texture& tex);
	~Obstacle();

	virtual void update(sf::Time deltaTime);
};

