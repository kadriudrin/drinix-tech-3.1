#include "stdafx.h"
#include "Actor.h"
#include "Component.h"

Component::Component(const std::string& newType) : type(newType)
{
}

Component::Component(const Component & other)
{
	std::cout << "Copied new Component of Type: " << type << std::endl;
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