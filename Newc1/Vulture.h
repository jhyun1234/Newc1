#pragma once
#include "Mechanics.h"

class Vulture : public Mechanics
{
public:
    Vulture();

#pragma region �Լ��� �������̵�
    // ���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ�
    // ����ϴ� ����Դϴ�.

    

    void Move();
    

    virtual void Attack()override;
    ~Vulture();

    // �Լ��� �������̵�� ��� ���迡���� �̷������,
    // ���� Ŭ�������� �Լ��� �������� �� ���� Ŭ������
    // �Լ� ���¿� ��ġ�ؾ� �մϴ�.
#pragma endregion
};

