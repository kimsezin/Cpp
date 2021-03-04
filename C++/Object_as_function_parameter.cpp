#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Person
{
public:
	int age;
	Person() : age(0) { };

};
Person& bar()
{
	Person _p;
	return _p;
}
void foo(Person& p_of_foo)
{
	p_of_foo.age = p_of_foo.age * 2;
}
int main()
{
	Person& p= bar();
	//p.age = 20;

	cout << p.age << endl;
	foo(p); // call by value

	cout << p.age;
	return 0;
}