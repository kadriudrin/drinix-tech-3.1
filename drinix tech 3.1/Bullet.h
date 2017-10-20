#pragma once
#include "Actor.h"

#include "Player.h"

class Bullet :
	public Actor
{
public:
	Player* player;

	Bullet();
	~Bullet();
};