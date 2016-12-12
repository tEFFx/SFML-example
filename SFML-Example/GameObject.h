#pragma once
#include <SFML\Graphics.hpp>

class GameObject
{
public:
	GameObject(sf::Texture& texture);
	~GameObject();

	virtual void update(sf::Time deltaTime) = 0;
	void draw(sf::RenderWindow& win);

protected:
	void move(float x, float y);
	void setPosition(float x, float y);
	sf::Vector2f getPosition();

private:
	sf::Sprite m_Sprite;
};

