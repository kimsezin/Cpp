#include<iostream>

using namespace std;
//기존 포인터의 문제점
// 할당과 해제가 짝이 맞아야함.
// new, delete
// malloc, free

//C++의 smart pointer 도입
// 메모리 자동해제
// nullptr로 자동 초기화
// delete하면 에러
// 동적으로 할당받은 공간에 대해서만 사용

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