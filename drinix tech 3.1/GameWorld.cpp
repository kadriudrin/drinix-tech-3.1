#include "stdafx.h"
#include "GameWorld.h"
#include "Print.h"

GameWorld::GameWorld()
{
}

void GameWorld::Load()
{
	Entity entity = Entity();
	entity.AddComponent <Print>();

	AddEntity(entity);
}

GameWorld::~GameWorld()
{
}