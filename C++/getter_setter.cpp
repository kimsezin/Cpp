#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class Person
{
private:
	int age;

public:
	int getAge()
	{
		return age;
	}
	void setAge(int _age)
	{
		age = _age;
	}
	//getter와 setter는 클래스 안에서 설정함(inline). 속도빠르나 코드가 길어짐
	//코드가 길지 않으면 안에다 선언하는게 좋음 밖에다 선언하면 오버헤드생김

};

int main()
{
	Person p;
	p.setAge(50);
}
