#include<iostream>

using namespace std;
//���� �������� ������
// �Ҵ�� ������ ¦�� �¾ƾ���.
// new, delete
// malloc, free

//C++�� smart pointer ����
// �޸� �ڵ�����
// nullptr�� �ڵ� �ʱ�ȭ
// delete�ϸ� ����
// �������� �Ҵ���� ������ ���ؼ��� ���

class person
{
private:
	string name;
public:
	person(string _name)
	{
		name = _name;
	}
	void showName()
	{
		cout <<"My name is: "<< name << endl;
	}
};

int main()
{
	/*int* pa = new int;
	delete pa;*/

	/*unique_ptr<int[]> pa(new int[5]);

	for (int i = 0; i < 5; i++)
	{
		pa[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << i << " " << pa[i] << endl;
	}*/

	int a = 10;
	unique_ptr<person> pa(new person("john"));
	pa->showName();

	person* pa2 = new person("john");
	pa2->showName();
	delete pa2;
	return 0;
}