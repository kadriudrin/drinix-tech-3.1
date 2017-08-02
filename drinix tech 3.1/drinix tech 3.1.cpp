#include "stdafx.h"
#include "Win.h"
#include "GameWorld.h"
#include "MenuWorld.h"

int main()
{
	win.AddWorld <GameWorld>();

	win.AddWorld <MenuWorld>();

	win.Tick();

    return 0;
}