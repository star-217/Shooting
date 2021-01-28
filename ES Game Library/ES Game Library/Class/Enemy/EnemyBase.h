#pragma once
#include "../../ESGLib.h"
#include "Enemy_pattern.h"

class EnemyBase:EnemyPattern
{
public:

	void Initialize(Vector3 set_pos,int move_ptn);
	void Update();
	void Draw();
	void GetCollision();
	int	 DropItem();
	int  GetScore() { return score;};

protected:

	int item;
	RectWH rect;
	int score;


};