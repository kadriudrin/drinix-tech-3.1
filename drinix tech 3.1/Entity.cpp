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

void Entity::SetID(const unsigned short newID)
{
	id = newID;
}

void Entity::Kill()
{
	isDead = true;
}

void Entity::Clear()
{
	for (Component* component : components)
		delete component;

	components.clear();
}

Entity::~Entity()
{
}