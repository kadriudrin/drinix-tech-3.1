#include "stdafx.h"
#include "MenuWorld.h"
#include "Shtyp.h"

MenuWorld::MenuWorld()
{
}

void MenuWorld::Load()
{
	Entity entity = Entity();
	entity.AddComponent <Shtyp>();

	AddEntity(entity);
}

MenuWorld::~MenuWorld()
{
}