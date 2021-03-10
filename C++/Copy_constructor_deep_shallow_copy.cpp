#include<iostream>

using namespace std;


//Copy constructor
// ���ο� ��ü�� ���� ��, �ٸ� ��ü�� ������ �����ؼ� ����� ��� ȣ��Ǵ� ������.

// �����Ϸ��� ���� �ڵ����� ����
// ��� member variable�� �ڵ� ����

// ������ ���� �� ����.
// �����ڿ� �����ϵ�, �μ��� ��ü reference variable

class car
{
private:
	int year;
	char* ptr;
public:
	car(int _year) : year(_year)
	{
		cout << "original constructor was called" << endl;
		ptr = new char[3000000];
	}
	~car()
	{
		delete[] ptr;
	}
	car(car& _c)
	{
		cout << "copy constructor was called" << endl;
		year = _c.year;
		ptr = new char[3000000];
	}
	/*
	void showYear()
	{
		cout << "This car was made in " << year << endl;
	}*/

};
int main()
{
	car c(2010);

	{
		car d = c;
	}
	
	return 0;
}