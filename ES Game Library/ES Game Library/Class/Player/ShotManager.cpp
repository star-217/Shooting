#include "ShotManager.h"

void ShotManager::Initialize()
{
	for (int i = 0; i < SHOT_MAX; i++)
		shot[i].Initialize();
}

void ShotManager::Update()
{
	
	for (int i = 0; i < SHOT_MAX; i++)
		shot[i].Update();
}

void ShotManager::Draw()
{
	for (int i = 0; i < SHOT_MAX; i++)
		shot[i].Draw();
}

void ShotManager::Shoot(Vector3 start_position)
{


	for (int i = 0; i < SHOT_MAX; i++) {
		if (!shot[i].GetState()) {
			shot[i].Shoot(start_position);
			break;
		}
	}
}

void ShotManager::Collision()
{
	for (int i = 0; i < SHOT_MAX; i++)
	{
		shot[i].GetCollision();
	}

}
