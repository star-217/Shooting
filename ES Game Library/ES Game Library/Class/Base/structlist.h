#include "../../ESGLib.h"

typedef struct
{
	//�J�E���^�[�@�ړ��p�^�[���@�G�̎�ށ@�ړ����x
	int count, pattern, type, speed;
	//�������W
	Vector3 pos;
	//�e���̊J�n���ԁ@�e���̎�ށ@�e�̐F�@�̗́@�e�̎�ށ@��؎���
	int blttime, blttype, color, hp, blttype2, wait;

} enemy_data_t;