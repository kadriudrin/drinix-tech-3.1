#include "stdafx.h"
#include "Public.h"

Win win(640, 360, "Hello");

World * GetCurrentWorld()
{
	return win.GetCurrentWorld();
}
