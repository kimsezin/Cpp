#include<SFML/Graphics.hpp>
#include<vector>
#include"GUN.h"
#include"NPC.h"
#include"NPC_SET.h"
using namespace sf;
using namespace std;

int main()
{
	RenderWindow window(VideoMode(640, 480), "Hello SFML");
	window.setFramerateLimit(60);

	NPC_SET npcs(5);

	GUN gun;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;

			case Event::KeyPressed:
				if (Keyboard::isKeyPressed(Keyboard::Left) == true)
				{
					gun.moveleft();
				}
				else if (Keyboard::isKeyPressed(Keyboard::Right) == true)
				{
					gun.moveright();
				}
				else if (Keyboard::isKeyPressed(Keyboard::Space) == true)
				{
					gun.fireBullet();
				}
				
				break;
			default:
				break;
			}
		}

		
		gun.update(npcs);
		npcs.update();

		window.clear();

		gun.draw(window);
		npcs.draw(window);
		
		window.display();

	}
	return 0;
}