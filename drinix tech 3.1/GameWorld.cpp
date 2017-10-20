#include "stdafx.h"
#include "GameWorld.h"

#include "Player.h"

GameWorld::GameWorld() : World("GameWorld")
{
}

void GameWorld::Load()
{
	//for (unsigned short i = 0; i < 100; i++)
		Bullet* bullet = Actor::Make<Bullet>();

	//Actor* actor = new Actor();
	//actor->AddComponent<Player>();

	//AddActor(actor);
}

GameWorld::~GameWorld()
{
}