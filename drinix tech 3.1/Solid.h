#pragma once

#include "Component.h"

class Win;

class Actor;

class Solid :
	public Component
{
public:
	std::string layerMask;
	sf::RectangleShape rect;

	void SetSize(sf::Vector2f newSize);

	void SetPosition(sf::Vector2f newPosition);

	Solid();
	virtual ~Solid();
};