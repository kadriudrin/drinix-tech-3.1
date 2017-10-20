#include "stdafx.h"
#include "Bullet.h"

Bullet::Bullet() : Actor()
{
	player = AddComponent<Player>();
}

Bullet::~Bullet()
{
}