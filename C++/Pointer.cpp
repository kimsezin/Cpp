#include<iostream>
using namespace std;

void func(int _i)
{
	cout << "func (int i)" << endl;
}
void func(char* p)
{
	cout << "func (char* p)" << endl;
}
int main()
{
	int a = 10;
	std::cout << "a: " << a << endl;

	int* pa = &a;
	cout << "pa: " << pa << endl;
	cout << "*pa: " << *pa << endl; 

	func(nullptr);
	//포인터 초기화는 nullptr


	int* p = new int[5];
	for (int i = 0; i < 5; i++)
	{
		p[i] = i + 1;
	}
	delete[] p;
}