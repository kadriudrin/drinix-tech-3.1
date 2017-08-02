#pragma once

#include "Entity.h"

class World
{
private:
	unsigned idCounter = 0;
public:
	bool isDead = false;
	bool running = true;
	std::vector < std::shared_ptr <Entity> > entities;

	World();

	virtual void Load();
	void Init();
	void Tick();
	void Destroy();

	void PrintAll();

	void AddEntity(Entity& newEntity);
	
	virtual ~World();
};