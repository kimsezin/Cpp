#include<iostream>
#include<cstring>

using namespace std;

struct Person {
	string name;
	unsigned int age;
};

Person* pdata = 0;


bool findPerson(string name)
{
	for (int i = 0; i < 3; i++)
	{
		if (pdata[i].name == name)
		{
			return true;
		}
	}
	return false;
}

bool findPerson(unsigned int age)
{
	for (int i = 0; i < 3; i++)
	{
		if (pdata[i].age == age)
		{
			return true;
		}
	}
	return false;
}

int func_a(int k)
{
	return 10;
}

int func_a(int* k)
{
	return 20;
}
int main()
{
	//�����̸��� ���� �Լ��� ���������
	//������ �Ű������� ����, Ÿ�Կ��� �޶���Ѵ�.
	//�Լ��� ��ȯ���� �ٸ��ٸ� Ÿ���� ���Ƶ� �������.

	pdata = new Person[3];
	pdata[0] = { "james",40 };
	pdata[1] = { "jane",20 };
	pdata[2] = { "tom",15 };

	cout << boolalpha; // bool���� true, false�� ����ϴ°�
	cout << "james: " << findPerson("james") << endl;
	cout << "21: " << findPerson(21) << endl;
	cout << "15: " << findPerson(15) << endl;

	cout << func_a(999) << endl;

	int x = 100;

	cout << func_a((int *)999) << endl;




	


	return 0;
}