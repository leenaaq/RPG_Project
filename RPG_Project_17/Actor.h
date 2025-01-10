#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Actor
{
private:
	string Name;//객체 이름
	int AttackPower;//공격력
	int HP;//현재 체력
	int MaxHP;//최대 체력
public:
	//멤버 함수
	Actor()//생성자
	{

	}

	int Attack()
	{
		return AttackPower;
	}
	void onHit(int inputAttackPower)
	{
		HP -= inputAttackPower;
	}
	bool isDead()
	{
		return HP > 0 ? false : true;
	}
	void printStatus()
	{
		cout << "이름 : " << Name<<endl;
		cout << "공격력 : " << AttackPower<<endl;
		cout << "현재 체력 : " << HP<<endl;		
	}
};