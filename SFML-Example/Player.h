#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
public:
	Player(sf::Texture& playerTex);
	~Player();

	virtual void update(sf::Time deltaTime);
};

