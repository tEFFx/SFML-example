#include "Player.h"



Player::Player(sf::Texture& playerTex) :
	GameObject(playerTex)
{
	move(320, 400);
}


Player::~Player()
{
}

void Player::update(sf::Time deltaTime) {
	float dt = deltaTime.asSeconds();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		move(50 * dt, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		move(-50 * dt, 0);
}