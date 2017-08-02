#pragma once

#include "Component.h"

class Print :
	public Component
{
public:
	Print();

	int counter = 0;
	void Init() override;
	void Tick() override;

	virtual ~Print();
};