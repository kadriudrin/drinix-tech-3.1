#include "stdafx.h"
#include "Win.h"
#include "GameWorld.h"

int main()
{
	win.AddWorld <GameWorld>();

	win.Tick();

    return 0;
}