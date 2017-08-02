#include "stdafx.h"
#include "World.h"
#include "Print.h"

World::World()
{
}

void World::Load()
{
}

void World::Init()
{
	Load();

	for (auto& e : entities)
		e->Init();
}

void World::Tick()
{
	for (auto e = entities.begin(); e != entities.end();) {
		(*e)->Tick();
		if ((*e)->isDead) 
			e = entities.erase(e);
		else
			++e;
	}
}

void World::Destroy()
{
	entities.clear();
}

void World::PrintAll()
{
	unsigned size = entities.size();
	printf("World is Printing (%d) Entities!\n", size);
}

void World::AddEntity(Entity& newEntity)
{
	std::shared_ptr <Entity> newEnt = std::make_shared <Entity>(newEntity);

	newEnt->SetID(idCounter++);
	newEnt->world = std::shared_ptr <World>(this);
	for (auto& c : newEnt->components)
		c->SetEntity(newEnt);
	entities.push_back(newEnt);
}

World::~World()
{
}