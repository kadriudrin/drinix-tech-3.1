#include "stdafx.h"
#include "Shtyp.h"

Shtyp::Shtyp() : Component("Shtyp")
{
}

void Shtyp::Init()
{
	printf("Shtyp Initialized!\n");
}

void Shtyp::Tick()
{
	counter++;
	printf("Shtyp Ticking: %d\n", counter);
	if (counter >= 1000)
		entity->Kill();
}

Shtyp::~Shtyp()
{
}