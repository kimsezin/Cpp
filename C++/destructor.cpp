#include<iostream>

using namespace std;
// destructor
// ��ü�� ����� �� ����Ǵ� �Լ�
// Ŭ���� �̸��� ~�� �ٿ��� ����
// ��ü�� �Ҵ���� ���� �޸𸮸� �����ؾ� �� �� ���

class Car
{
private:
	char* ptr;
public:
	Car()
	{
		cout << "Car constructor" << endl;
		ptr = new char[3000000];
	};
	~Car()
	{
		cout << "Car destructor was called" << endl;
		delete ptr;
	}
};
int main()
{
	cout << "Start----------------------" << endl;
	Car c;
	cout << "End------------------------" << endl;
	return 0;
}