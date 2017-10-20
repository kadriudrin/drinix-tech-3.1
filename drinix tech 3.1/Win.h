#pragma once

class World;

class Win
{
private:
	std::vector <World*> worlds;
	unsigned short currentWorld;
	unsigned short nextWorld;
public:
	sf::RenderWindow window;

	unsigned short width, height;
	std::string title;

	bool running = true;
	bool changed = false;

	World* GetCurrentWorld();

	Win();
	Win(unsigned short newWidth, unsigned short newHeight, const std::string& newTitle);

	void Tick();

	void RunWorld(const std::string& name);
	void ReRunWorld();

	template <typename T>
	void AddWorld();

	void Quit();
	~Win();
};

template <typename T>
inline void Win::AddWorld()
{
	T* t = new T();
	worlds.push_back(t);
	currentWorld = worlds.size() - 1;
}