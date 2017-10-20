#include "stdafx.h"
#include "Actor.h"
#include "Solid.h"
#include "World.h"

World::World(const std::string& newName) : name(newName)
{
}

void World::Init()
{
	Load();

	for (auto& a : actors)
		a->Init();
}

void World::Tick()
{
	for (auto e = actors.begin(); e != actors.end(); ) {

		(*e)->Tick();

		if ((*e)->isDead)
		{
			(*e)->Clear();
			delete (*e);
			e = actors.erase(e);
		}
		else
			++e;
	}
}

void World::Destroy()
{
	for (Actor* a : actors)
		delete a;

	actors.clear();
}

void World::PrintAll()
{
	unsigned short size = actors.size();

	std::cout << "World is Printing " << size << " Entities!" << std::endl;

	//for (unsigned short i = 0; i < actors.size(); i++)
	//	std::cout << "(" << i << ")->"
}

void World::AddActor(Actor* newActor)
{
	newActor->SetID(idCounter++);
	newActor->world = this;

	actors.push_back(newActor);
}

void World::AddSolid(Solid& newSolid)
{
	solids.push_back(&newSolid);
}

World::~World()
{
	Destroy();
}