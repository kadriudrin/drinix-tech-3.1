#pragma once

#include "World.h"

class Win
{
private:
	std::vector < std::shared_ptr <World> > worlds;
	unsigned currentWorld;
	unsigned nextWorld;
public:
	bool running = true;
	bool changed = false;

	Win();

	void Tick();

	void RunWorld(unsigned index);

	template <typename T>
	void AddWorld();

	~Win();
};

template <typename T>
inline void Win::AddWorld()
{
	T t = T();
	worlds.push_back(std::make_shared <T>(t));
	currentWorld = worlds.size() - 1;
}