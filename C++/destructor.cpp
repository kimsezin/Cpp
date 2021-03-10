#include<iostream>

using namespace std;
// destructor
// 객체가 사라질 때 수행되는 함수
// 클래스 이름에 ~를 붙여서 선언
// 객체가 할당받은 동적 메모리를 해제해야 할 때 사용

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