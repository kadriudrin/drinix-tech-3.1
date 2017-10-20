#pragma once

class Actor;

class Component
{
public:
	Actor* actor;
	std::string type;

	Component(const std::string& newType);

	Component(const Component& other);

	virtual void Init();
	virtual void Tick();

	virtual ~Component();
};