#pragma once

#include "Component.h"

class Sprite :
	public Component
{
private:
	const char* resourceDir = "Res/";
	bool hasTexture = false;
public:
	sf::RectangleShape rect;
	sf::Texture texture;

	Sprite(const char* loadLocation = "null");

	void Init() override;
	void Tick() override;

	virtual ~Sprite();
};