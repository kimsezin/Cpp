#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class Person
{
private:
	int age;

public:
	int getAge()
	{
		return age;
	}
	void setAge(int _age)
	{
		age = _age;
	}
	//getter�� setter�� Ŭ���� �ȿ��� ������(inline). �ӵ������� �ڵ尡 �����
	//�ڵ尡 ���� ������ �ȿ��� �����ϴ°� ���� �ۿ��� �����ϸ� ����������

};

int main()
{
	Person p;
	p.setAge(50);
}
