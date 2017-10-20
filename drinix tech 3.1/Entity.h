#pragma once

#include "Component.h"

class Entity
{
private:
	unsigned short id;
public:
	std::vector <Component*> components;
	World* world;
	bool isDead = false;

	virtual void Init();
	virtual void Tick();

	void SetID(const unsigned short newID);
	
	void Kill();
	void Clear();

	Entity();
	~Entity();
};