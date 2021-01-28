#include "../../ESGLib.h"

typedef struct
{
	//カウンター　移動パターン　敵の種類　移動速度
	int count, pattern, type, speed;
	//初期座標
	Vector3 pos;
	//弾幕の開始時間　弾幕の種類　弾の色　体力　弾の種類　停滞時間
	int blttime, blttype, color, hp, blttype2, wait;

} enemy_data_t;