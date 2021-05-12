#include <iostream>
using namespace std;

struct character {

	int Level;
	float attack_damage; //���ݷ�
	float hp; //ü��
	float attack_speed; //���ݼӵ�
	float range; //�����Ÿ�
};

character Setlevel(character CHARAC, int level); //���� �缳��
float Get_attack_damage(character CHARAC); //ĳ������ �� �ɷ�ġ
float Get_hp(character CHARAC);
float Get_attack_speed(character CHARAC);
float Get_range(character CHARAC);

void PrintChar(character CHARAC); //ĳ���� ��ü �ɷ�ġ ���


int main() {

	character Garen = { 1, 66, 620, 0.625, 175 };
	character LeeSin = { 1, 70, 575, 0.651, 125 };
	character MissFortune = { 1, 52, 570, 0.656, 550 };

	Garen = Setlevel(Garen, 10);
	LeeSin = Setlevel(LeeSin, 10);
	MissFortune = Setlevel(MissFortune, 10);

	cout << "Garen-------------" << endl;
	PrintChar(Garen);
	cout << "LeeSin------------" << endl;
	PrintChar(LeeSin);
	cout << "MissFortune-------" << endl;
	PrintChar(MissFortune);

	system("pause");
	return 0;
}

character Setlevel(character CHARAC, int level) {

	CHARAC.Level = level;

	if (CHARAC.attack_damage == 66) {
		CHARAC.attack_damage += 4.5 * (level - 1);
		CHARAC.hp += 84 * (level - 1);
		CHARAC.attack_speed += 0.0365 * (level - 1);
		CHARAC.range += 0 * (level - 1);
	}

	else if (CHARAC.attack_damage == 70) {
		CHARAC.attack_damage += 3.7 * (level - 1);
		CHARAC.hp += 85 * (level - 1);
		CHARAC.attack_speed += 0.03 * (level - 1);
		CHARAC.range += 0 * (level - 1);
	}

	else if (CHARAC.attack_damage == 52) {
		CHARAC.attack_damage += 2.7 * (level - 1);
		CHARAC.hp += 93 * (level - 1);
		CHARAC.attack_speed += 0.03 * (level - 1);
		CHARAC.range += 0 * (level - 1);
	}

	return CHARAC;
}

float Get_attack_damage(character CHARAC) {
	return CHARAC.attack_damage;
}

float Get_hp(character CHARAC) {
	return CHARAC.hp;
}

float Get_attack_speed(character CHARAC) {
	return CHARAC.attack_speed;
}

float Get_range(character CHARAC) {
	return CHARAC.range;
}

void PrintChar(character CHARAC) {
	cout << "���ݷ�: " << CHARAC.attack_damage << endl;
	cout << "ü��: " << CHARAC.hp << endl;
	cout << "���� �ӵ�: " << CHARAC.attack_speed << endl;
	cout << "�����Ÿ�: " << CHARAC.range << endl;
}