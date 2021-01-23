#pragma once
#include "../../ESGLib.h"

class EnemyBase
{
public:
	void Initialize();
	void Update();
	void Draw();
	void GetCollision();
	int	 DropItem();
	int GetScore() { return score;};

private:

	int item;
	RectWH rect;
	int score;


};