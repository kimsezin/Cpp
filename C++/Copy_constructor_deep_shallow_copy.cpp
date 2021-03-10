#include<iostream>

using namespace std;


//Copy constructor
// 새로운 객체를 만들 때, 다른 객체의 내용을 복사해서 만드는 경우 호출되는 생성자.

// 컴파일러에 의해 자동으로 생성
// 모든 member variable을 자동 복사

// 별도로 만들 수 있음.
// 생성자와 동일하되, 인수는 객체 reference variable

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