#include "shot.h"



void Shot::Initialize() 
{
	sprite = GraphicsDevice.CreateSpriteFromFile(_T("stg0729.png"),Color(0,0,255));
	speed = 15;
	pos = Vector3(-1000, 0, 0);
	shot_flag = false;
}

void Shot::Update()
{

	if (!shot_flag)
		return;

	pos.y -= speed;
	if (pos.y < -100)
		shot_flag = false;



}

void Shot::Draw()
{

	SpriteBatch.Draw(*sprite, pos,RectWH(8,8,16,16));

}

void Shot::Shoot(Vector3 player_pos)
{

	if (!shot_flag) {
		pos = player_pos;
		pos.x += 35;
		shot_flag = true;
	}
}