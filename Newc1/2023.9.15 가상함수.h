#pragma once
#include <iostream>
#include "Mechanics.h"
#include "Vulture.h"
#include "SiegeTank.h"
#include "Goliath.h"
using namespace std;


#pragma region ������
// ���� ���� ���� �ٸ� ��ü�� ������ ����� 
// ���� �ٸ� ������� ó���� �� �ִ� �۾� 

// �������� ������ ������ �Լ��� �Ӽ��� �����Ǵ� ���� ���ε��� ���� �ʰ�,
// ���� �ð��� �Լ��� �Ӽ��� ������ �� �ִ� ���� ���ε��� �����ϰ� �Ѵ�.


#pragma endregion


int main()
{
#pragma region �������̵�
	/*
	Mechanic mechanic;
	mechanic.Move();

	Vulture vulture;
	vulture.Move();
	*/
#pragma endregion

#pragma region ���� �Լ�
	// ����ϴ� Ŭ���� ������ ���� ������ �Լ��� ������
	// �� �� �ִ� �Լ��̴�


	// Mechanics* mechanics1 = new Vulture;
	//  // cout << "Mechanics �� ũ��" << sizeof(Mechanics) << endl;
	//  // cout << "Vulture �� ũ��" << sizeof(Vulture) << endl;
	//
	//  // ���� �Լ��� �� �� �̻��� ���� �Լ��� �����ϴ� Ŭ������
	//  // ���� �� ��ü �ּҿ� ���� �Լ� ���̺��� �߰��Ѵ�.
	//
	// mechanics1->Move();
	// mechanics1->Attack();

	// ���� �Լ� ���� �ð��� ���� Ŭ������ ���� ������
	// ���� Ŭ������ �����ǵ� �Լ��� ȣ���� �� ������,
	// ���� �����ڴ� ������ �����ؾ� �Ѵ�.


#pragma endregion


#pragma region ��Ÿ ���� ����


	/*int SelectNumber = 0;
	int CreateCount = 0;

	Mechanics* mechanics = nullptr;

	while (CreateCount < 5)
	{
		cin >> SelectNumber;
		switch (SelectNumber)
		{
		case 1: mechanics = new Vulture;
			break;
		case 2: mechanics = new SiegeTank;
			break;
		case 3: mechanics = new Goliath;
			break;
		default:
			continue;

		}
		CreateCount++;
		mechanics->Generate();
		mechanics->Move();
		mechanics->Attack();
	}*/
	// ���� �Լ��� ��� ���� �Լ� ���̺��� ����Ͽ�
	// ȣ��Ǵ� �Լ��� ���� �ð��� �����ϸ�, ��������
	// ����� �Լ��� ���� �Լ��� ������ �� ����.

#pragma endregion

#pragma region ���� �Ҹ���
	// ��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� �������
	// ��� ȣ��Ǵ� �Ҹ��� �̴�.

	Mechanics* unit1 = new Vulture;
	Mechanics* unit2 = new SiegeTank;
	Mechanics* unit3 = new Goliath;



	delete unit1;
	delete unit2;
	delete unit3;

	// ���� �Ҹ��ڴ� ��ӵ� ��ü�� ������ �� ���� Ŭ������ �Ҹ��ڰ�
	// ���� ����ǰ� ���� Ŭ������ �Ҹ��ڰ� ����Ǿ�� �ϱ� ������
	// ���� �ð��� �޸𸮿� �Ҵ�� ��ü�� Ȯ���ϰ� ���ʴ�� �Ҹ���Ѿ� �Ѵ�.
#pragma endregion









	return 0;

}
