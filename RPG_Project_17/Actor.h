#pragma once
#include <string>
#include <vector>

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
	int Attack();
	void onHit(int inputAttackPower);
	bool isDead(int inputHP);
	void printStatus();
};