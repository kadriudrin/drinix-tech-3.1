#include "stdafx.h"
#include "Player.h"

Player::Player() : Component("Player")
{
}

void Player::Init()
{
}

void Player::Tick()
{
	counter++;
	std::cout << "Counter: " << counter << std::endl;

	if (counter >= 1000)
		actor->Kill();
		//win.RunWorld("GameWorld");
}

Player::~Player()
{
}