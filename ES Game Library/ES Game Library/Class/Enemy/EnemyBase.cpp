#include "EnemyBase.h"

void EnemyBase::Initialize()
{
	item = 0;
}

void EnemyBase::GetCollision()
{
}

int EnemyBase::DropItem()
{

  	item = MathHelper_Random(0, 2);


	return item;
}

int EnemyBase::GetScore()
{

}
