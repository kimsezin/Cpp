#pragma once
#include<SFML/Graphics.hpp>
#include<vector>
#include"NPC_SET.h"

using namespace sf;
using namespace std;

class GUN
{
private:
	CircleShape gun;
	CircleShape bullet;
	bool showbullet;
public:

	GUN();
	void moveleft();
	void moveright();
	void fireBullet();
	void update(NPC_SET& npcs);
	void draw(RenderWindow& _window);
};