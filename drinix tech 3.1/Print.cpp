#include "stdafx.h"
#include "Print.h"

Print::Print() : Component("Print")
{
}

void Print::Init()
{
	printf("Print Component Initialized!\n");
}

void Print::Tick()
{
	counter++;
	printf("Print Component Ticking: %d\n", counter);
	if (counter >= 100)
		win.RunWorld(1);
}

Print::~Print()
{
}