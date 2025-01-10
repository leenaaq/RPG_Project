#pragma once
#include <string>
#include <vector>

class Actor
{
private:
	string Name;//객체 이름
	int AttackPower;//공격력
	int HP;//현재 체력
	int MaxHP;//최대 체력
public:
	//멤버 함수
	Actor();//생성자
	int Attack();
	void onHit(int inputAttackPower);
	bool isDead(int inputHP);
	void printStatus();
};