#include "GameObject.h"

GameObject::GameObject(sf::Texture& texture) : 
	m_Sprite(texture)
{
}

GameObject::~GameObject()
{
}

void GameObject::draw(sf::RenderWindow& win) {
	win.draw(m_Sprite);
}

void GameObject::move(float x, float y) {
	m_Sprite.move(x, y);
}

void GameObject::setPosition(float x, float y) {
	m_Sprite.setPosition(x, y);
}

sf::Vector2f GameObject::getPosition() {
	return m_Sprite.getPosition();
}