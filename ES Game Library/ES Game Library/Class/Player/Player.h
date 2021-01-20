#include "../../ESGLib.h"
#include "ShotManager.h"


class Player
{
public:
	void Initialize();
	void Update();
	void Draw();

private:
	KeyboardState key;
	KeyboardBuffer key_buffer;


	float speed;
	SPRITE player;
	Vector3 position;
	ShotManager shot;

};