#include "stdafx.h"
#include "World.h"
#include "Entity.h"

Entity::Entity()
{
}

void Entity::Init()
{
	isDead = false;
	for (auto& c : components)
		c->Init();
}

void Entity::Tick()
{
	for (auto& c : components)
		c->Tick();
}

void Entity::SetID(unsigned newID)
{
	id = newID;
}

void Entity::Kill()
{
	isDead = true;
	//world->Kill(id);
}

Entity::~Entity()
{
	components.clear();
}