#pragma once
#include "shot.h"

class ShotManager
{
public:
	void Initialize();
	void Update();
	void Draw();
	void Shoot(Vector3 pos);
	void Collision();
private:

	enum{SHOT_MAX = 50};
	Shot shot[SHOT_MAX];

};
