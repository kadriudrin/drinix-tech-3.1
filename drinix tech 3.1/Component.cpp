#include "stdafx.h"
#include "Entity.h"
#include "Component.h"

Component::Component(std::string newType) : type(newType)
{
}

void Component::SetEntity(std::shared_ptr<Entity> newEntity)
{
	entity = newEntity;
}

void Component::Init()
{
}

void Component::Tick()
{
}

Component::~Component()
{
}