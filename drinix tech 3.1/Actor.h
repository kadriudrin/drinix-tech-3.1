#pragma once

#include "Entity.h"

#include "Transform.h"
#include "Sprite.h"
#include "Solid.h"

class Actor :
	public Entity
{
public:
	Transform* transform;
	Sprite* sprite;
	Solid* solid;

	Actor();

	template <typename T>
	static T* Make();

	template <typename T, typename ...Args>
	T* AddComponent(Args && ...args);

	virtual ~Actor();
};

template<typename T>
inline T * Actor::Make()
{
	T* newObject = new T(); // Allocate new Memory for the new object

	GetCurrentWorld()->AddActor((Actor*)newObject); // Add that new object to the vector
	
	return newObject; // Return a reference of that object
}

template<typename T, typename ...Args>
inline T * Actor::AddComponent(Args && ...args)
{
	T* newComponent = new T(std::forward<Args>(args)...); // Allocate new Memory for the new Component
	newComponent->actor = this; 

	components.push_back(newComponent); // Add it to the vector

	return newComponent; // Return a reference of it
}