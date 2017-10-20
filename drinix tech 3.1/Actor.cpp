#include "stdafx.h"
#include "World.h"
#include "Actor.h"

Actor::Actor()
{
	transform = AddComponent <Transform>();
	sprite = AddComponent <Sprite>("player.png");
	solid = AddComponent <Solid>();
}

Actor::~Actor()
{
}