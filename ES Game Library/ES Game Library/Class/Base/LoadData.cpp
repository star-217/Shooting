#include "LoadData.h"
#include <fstream>


void Load::LoadData()
{

	enemy_data_t ene_d;

	std::ifstream enefile("EnemyData.dat");

	std::string enefilename;
	TCHAR t_enefilename[256];

	int k = 0;
	while (true)
	{
		k++;

		getline(enefile, enefilename);

		if (enefile.eof())
			break;

		
		if (k > 2)
		{
			Vector3 data;

			float no;
			char c;
			enefile >> ene_d.count >> c >> ene_d.pattern >> c >> ene_d.type >> c >> ene_d.speed
				>> ene_d.pos.x >> c >> ene_d.pos.y >> c
				>> ene_d.blttime >> c >> ene_d.blttype >> c >> ene_d.hp >> c >> ene_d.blttype2 >> c >> ene_d.wait;
		}
	}
}