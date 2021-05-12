#include <iostream>
using namespace std;

struct character {

	int Level;
	float attack_damage; //공격력
	float hp; //체력
	float attack_speed; //공격속도
	float range; //사정거리
};

character Setlevel(character CHARAC, int level); //레벨 재설정
float Get_attack_damage(character CHARAC); //캐릭터의 각 능력치
float Get_hp(character CHARAC);
float Get_attack_speed(character CHARAC);
float Get_range(character CHARAC);

void PrintChar(character CHARAC); //캐릭터 전체 능력치 출력


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
	cout << "공격력: " << CHARAC.attack_damage << endl;
	cout << "체력: " << CHARAC.hp << endl;
	cout << "공격 속도: " << CHARAC.attack_speed << endl;
	cout << "사정거리: " << CHARAC.range << endl;
}