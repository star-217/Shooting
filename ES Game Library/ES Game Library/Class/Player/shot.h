#include "../../ESGLib.h"

class Shot
{
public:

	void Initialize();
	void Update();
	void Draw();
	void Shoot(Vector3 player_pos);
	bool GetState() { return shot_flag; };
	Rect GetCollision() { return Rect(0, 0, 16, 16); };

private:

	Vector3 pos;
	SPRITE sprite;
	float speed;
	bool shot_flag;
};