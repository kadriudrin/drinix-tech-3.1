#pragma once

#include "Component.h"

class Shtyp :
	public Component
{
public:
	Shtyp();

	int counter = 0;
	void Init() override;
	void Tick() override;

	virtual ~Shtyp();
};