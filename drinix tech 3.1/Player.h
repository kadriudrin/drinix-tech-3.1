#pragma once

#include "Component.h"

class Player :
	public Component
{
public:
	Player();

	unsigned short counter = 0;
	void Init() override;
	void Tick() override;

	virtual ~Player();
};