#include<iostream>

using namespace std;

// this pointer
// class로부터 객체가 나오는데 객체에서 이용하는것임.


class person
{
private:
	string name;
public:
	person(string _name)
	{
		this->name = _name;
	}

	void showName()
	{
		cout << "My name is : " << this->name << endl;
	}
};
int main()
{
	/*unique_ptr<person> pa(new person("Tom"));
	pa->showName();*/

	int a = 10;
	/*const int* pa = nullptr;

	pa = &a;
	cout << "before " << *pa << endl;
	*pa = 35;
	cout << "after " << *pa << endl;*/

	int* const pa = &a;
	int b = 999;
	cout << "before " << *pa << endl;
	pa = &b;
	cout << "after " << *pa << endl;

	return 0;
}