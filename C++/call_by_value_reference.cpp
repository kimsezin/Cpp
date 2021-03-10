#include<iostream>

using namespace std;

class car
{
private:
	int year;
public:
	car(int _year)
	{
		year = _year;
	}
	void showYear()
	{
		cout << "This car was made in " << year << endl;
	}
	void changeYear(int _y)
	{
		year = year - _y;
	}
};

void changeCarYear(car* _c)
{
	_c->changeYear(10);
	_c->showYear();
}

int main()
{
	car c(2010);
	c.showYear();
	changeCarYear(&c);
	c.showYear();
	return 0;
}