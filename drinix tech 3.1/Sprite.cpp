#include "stdafx.h"
#include "Sprite.h"

Sprite::Sprite(const char* loadLocation) : Component("Sprite")
{
	if (texture.loadFromFile(std::string(resourceDir) + loadLocation)) {
		hasTexture = true;
		texture.setSmooth(true);
		rect.setSize(sf::Vector2f(200, 200));
	}
}

void Sprite::Init()
{
	if (hasTexture)
		rect.setTexture(&texture);
}

void Sprite::Tick()
{
	win.window.draw(rect);
}

Sprite::~Sprite()
{
}