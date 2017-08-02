#pragma once

class Entity;

class Component
{
public:
	std::shared_ptr	<Entity> entity;
	std::string type;

	Component(std::string newType);

	void SetEntity(std::shared_ptr <Entity> newEntity);

	virtual void Init();
	virtual void Tick();

	virtual ~Component();
};