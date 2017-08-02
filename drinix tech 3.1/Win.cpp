#include "stdafx.h"
#include "Win.h"

Win::Win()
{
}

void Win::Tick()
{
	do 
	{
		changed = false;
		running = true;
		worlds.at(currentWorld)->Init();

		while (running) {
			worlds.at(currentWorld)->Tick();
			if (worlds.at(currentWorld)->isDead) {
				worlds.at(currentWorld)->isDead = false;
				worlds.at(currentWorld)->Destroy();
				currentWorld = nextWorld;
			}
		}

	} while (changed);
}

void Win::RunWorld(unsigned index)
{
	worlds.at(currentWorld)->isDead = true;
	nextWorld = index;
						 
	changed = true;		 
	running = false;      
}

Win::~Win()
{
}