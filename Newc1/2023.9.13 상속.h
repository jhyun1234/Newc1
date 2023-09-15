#pragma once
#include <iostream>
#include "Camera.h"
using namespace std;

#pragma region ���
// ���� Ŭ������ �Ӽ��� ���� Ŭ������ ����� �� �ֵ���
// �������ִ� ����̴�.




class Vehicle
{
protected:
    float speed;
    static int KillCount;
public:
    Vehicle()
    {
        cout << "Vehicle ������Ʈ ����" << endl;
    }

    void Movement()
    {
        cout << "�̵�" << endl;
    }

    static int GetCount()
    {
        return KillCount;
    }

    ~Vehicle()
    {
        cout << "Vehicle ������Ʈ ����" << endl;
    }

};

int Vehicle::KillCount = 0;

class Car : public Vehicle
{
private:
    int carID;
public:
    Car()
    {
        carID = 1;
        speed = 100;
        cout << "Car ������Ʈ ���� " << endl;
    }

    ~Car()
    {
        KillCount++;
        cout << "Car ������Ʈ ���� " << endl;
        cout << "KillCount" << KillCount << endl;

    }

};

// Ŭ������ ��� ���迡�� ���� Ŭ������ ���� Ŭ������
// �Ӽ��� ����� �� ������, ���� Ŭ������ ���� Ŭ������
// �޸𸮸� ������ ���·� �޸��� ũ�Ⱑ �����ȴ�.


#pragma endregion



int main()
{
#pragma region ���

    Vehicle vehicle;

    Car car1;
    Car car2;
    Car car3;


    cout << "vehicle�� ũ�� :" << sizeof(vehicle) << endl;
    cout << "Car �� ũ�� :" << sizeof(Car) << endl;

#pragma endregion

#pragma region Ŭ���� ���Ұ� ����
    /*Camera camera;

    camera.Information();*/


#pragma endregion




    return 0;

}
