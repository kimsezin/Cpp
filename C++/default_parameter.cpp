#include<iostream>

using namespace std;


void func_a(int a, int b, int c = 3)
{
	cout << a << " : " << b << " : " << c << endl;
}


int main()
{
	//default parameter of function

	//�Լ� �Ķ���Ϳ� �⺻���� ����
	//�Ķ���Ͱ� ���°��, �⺻������ ȣ��

	//func_a(10, 20, 30);
	func_a(999,30,5);

	return 0;
}
