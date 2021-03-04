#include<iostream>

using namespace std;


void func_a(int a, int b, int c = 3)
{
	cout << a << " : " << b << " : " << c << endl;
}


int main()
{
	//default parameter of function

	//함수 파라미터에 기본값을 지정
	//파라미터가 없는경우, 기본값으로 호출

	//func_a(10, 20, 30);
	func_a(999,30,5);

	return 0;
}
