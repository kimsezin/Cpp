#include"GUN.h"


GUN::GUN()
{
	gun = CircleShape(50.0f);
	gun.setFillColor(Color::Green);
	gun.setPosition(270.0f, 430.0f);

	showbullet = false;
	bullet = CircleShape(5.0f);
	bullet.setFillColor(Color::Red);


}

void GUN::moveleft()
{
	gun.move(-10.0f, 0);
}
void GUN::moveright()
{
	gun.move(10.0f, 0);
}
void GUN::fireBullet()
{
	if (showbullet == false)
	{
		Vector2f pos = gun.getPosition();
		bullet.setPosition(pos.x + 50, pos.y);
		showbullet = true;
	}
}
void GUN::update(NPC_SET& npcs)
{
	if (showbullet == true)
	{
		bullet.move(0, -8.0f);
		if (bullet.getPosition().y < 0.0f)
		{
			showbullet = false;
		}
		else
		{
			//bullet의 floatrect를 구해서 npc_set객체의 checkhit을 호출한다.
			npcs.checkHit(bullet.getGlobalBounds());
		}
	}
}
void GUN::draw(RenderWindow& _window)
{
	_window.draw(gun);
	if (showbullet == true)
	{
		_window.draw(bullet);
	}
}
