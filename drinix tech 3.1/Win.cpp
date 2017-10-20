#include "stdafx.h"
#include "World.h"
#include "Win.h"

World* Win::GetCurrentWorld()
{
	return worlds.at(currentWorld);
}

Win::Win()
{
}

Win::Win(unsigned short newWidth, unsigned short newHeight, const std::string& newTitle)
	: width(newWidth), height(newHeight), title(newTitle)
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 4;

	window.create(sf::VideoMode(width, height), title, sf::Style::Default, settings);
}

void Win::Tick()
{
	do 
	{						
		changed = false;			
		running = true;					
		worlds.at(currentWorld)->Init();
										
		while (running)
		{
			sf::Event event;

			while (window.pollEvent(event)) 
			{
				if (event.type == sf::Event::Closed)
				{
					Quit();
					return;
				}
			}

			window.clear();				
			
			worlds.at(currentWorld)->Tick();
			if (worlds.at(currentWorld)->isDead) {

				worlds.at(currentWorld)->isDead = false;
				worlds.at(currentWorld)->Destroy();
				currentWorld = nextWorld;
				nextWorld = 0;

			}					
			
			window.display();		
		}						
						
	} while (changed);
}

void Win::RunWorld(const std::string& name)
{
	worlds.at(currentWorld)->isDead = true;
	
	nextWorld = currentWorld;

	for (unsigned short i = 0; i < worlds.size(); i++) {
		if (worlds.at(i)->name == name) {
			nextWorld = i;
			break;
		}
	}
						 
	changed = true;		 
	running = false;      
}

void Win::ReRunWorld()
{
	worlds.at(currentWorld)->isDead = true;
	nextWorld = currentWorld;
	changed = true;
	running = false;
}

void Win::Quit()
{
	window.close();
	running = false;
	changed = false;

	for (World* world : worlds)
		delete world;

	worlds.clear();
}

Win::~Win()
{
}