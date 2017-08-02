#pragma once

#include "World.h"

class GameWorld :
	public World
{
public:
	GameWorld();

	void Load() override;

	virtual ~GameWorld();
};