#pragma once
#include<SFML/Graphics.hpp>
#include"NPC.h"
#include<vector>
using namespace sf;
using namespace std;

class NPC_SET
{
private:
	vector<NPC> npcs;
public:
	NPC_SET(int num);
	void update();
	void draw(RenderWindow& _window);
	void checkHit(FloatRect Rect);
};