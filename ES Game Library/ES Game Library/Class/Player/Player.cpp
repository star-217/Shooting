#include "Player.h"

void Player::Initialize()
{
	player = GraphicsDevice.CreateSpriteFromFile(_T("player.png"));
	position = Vector3(0, 0, 0);
	shot.Initialize();
	speed = 5;
}

void Player::Update()
{
	key = Keyboard->GetState();
	key_buffer = Keyboard->GetBuffer();

	shot.Update(position);

	if (key.IsKeyDown(Keys_Up)) {
		position.y -= speed;
	}if (key.IsKeyDown(Keys_Down)) {
		position.y += speed;
	}if (key.IsKeyDown(Keys_Right)) {
		position.x += speed;
	}if (key.IsKeyDown(Keys_Left)) {
		position.x -= speed;
	}

	if (key.IsKeyDown(Keys_Z))
		shot.Shoot(position);


	
	


}

void Player::Draw()
{
	SpriteBatch.Draw(*player,position);
	shot.Draw();
}
