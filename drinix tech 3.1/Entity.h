#pragma once

#include "Component.h"

class World;

class Entity
{
private:
	unsigned id;
public:
	std::vector < std::shared_ptr <Component> > components;
	std::shared_ptr <World> world;
	bool isDead = false;
	Entity();

	virtual void Init();
	virtual void Tick();

	void SetID(unsigned newID);
	template <typename T, typename ...Args>
	void AddComponent(Args && ...args);
	
	void Kill();
	virtual ~Entity();
};

template<typename T, typename ...Args>
inline void Entity::AddComponent(Args && ...args)
{
	T t = T(std::forward<Args>(args)...);
	components.push_back(std::make_shared <T>(t));
}