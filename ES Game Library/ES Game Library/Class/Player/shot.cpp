#include "shot.h"



void Shot::Initialize() 
{
	sprite = GraphicsDevice.CreateSpriteFromFile(_T("player.png"));
	shot_flag = false;
}

void Shot::Update(Vector3 player_pos)
{



	if(shot_flag) 
	{
		Shoot(player_pos);
	}



}

void Shot::Draw()
{

	SpriteBatch.Draw(*sprite, position);

}

void Shot::Shoot(Vector3 player_pos)
{
	shot_flag = true;
	position.y = player_pos.y - speed;

	if (position.y < -20)
		shot_flag = false;
}