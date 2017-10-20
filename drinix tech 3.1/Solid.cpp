#include "stdafx.h"
#include "Solid.h"

Solid::Solid() : Component("Solid")
{
	//win.GetCurrentWorld()->AddSolid(this);
}

void Solid::SetSize(sf::Vector2f newSize)
{
	rect.setSize(newSize);
}

void Solid::SetPosition(sf::Vector2f newPosition)
{
	rect.setPosition(newPosition);
}

Solid::~Solid()
{
}