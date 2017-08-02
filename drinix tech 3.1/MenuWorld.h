#pragma once

#include "World.h"

class MenuWorld :
	public World
{
public:
	MenuWorld();

	void Load() override;

	virtual ~MenuWorld();
};