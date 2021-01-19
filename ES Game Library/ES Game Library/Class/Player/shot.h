#include "../../ESGLib.h"

class Shot
{
public:

	void Initialize();
	void Update(Vector3 player_pos);
	void Draw();
	void Shoot(Vector3 player_pos);

private:

	Vector3 position;
	SPRITE sprite;
	float speed;
	bool shot_flag;
};