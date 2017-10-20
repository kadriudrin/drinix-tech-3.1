#pragma once

class Solid;

class World
{
private:
	unsigned short idCounter = 0;
public:
	std::string name;
	bool isDead = false;
	bool running = true;

	std::vector <Actor*> actors;
	std::vector <Solid*> solids;

	World(const std::string& newName);

	virtual void Load() = 0;
	void Init();
	void Tick();
	void Destroy();

	void PrintAll();

	void AddActor(Actor* newActor);
	void AddSolid(Solid& newSolid);
	
	virtual ~World();
};