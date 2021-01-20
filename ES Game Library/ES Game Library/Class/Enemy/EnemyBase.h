#pragma once
#include "../../ESGLib.h"

class EnemyBase
{
public:
	void Initialize();
	void Update();
	void Draw();
	void GetCollision();
	void DropItem();
	void GetScore();

private:
	SPRITE enemy;


};