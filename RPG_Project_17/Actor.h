#pragma once
#include <string>
#include <vector>
#include <iostream>

class Actor
{
private:
	string Name;//��ü �̸�
	int AttackPower;//���ݷ�
	int HP;//���� ü��
	int MaxHP;//�ִ� ü��
public:
	//��� �Լ�
	Actor();//������
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
		return hp > 0 ? false : true;
	}
	void printStatus()
	{
		cout << "�̸� : " << Name<<endl;
		cout << "���ݷ� : " << AttackPower<<endl;
		cout << "���� ü�� : " << HP<<endl;		
	}
};