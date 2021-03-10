#include<iostream>

using namespace std;
class car
{
public:
	static int year;
	car()
	{

	}
	void showYear()
	{
		cout << year << endl;
	}
	void changeYear(int _y)
	{
		year = _y;
	}
};

int car::year = 2020;
int main()
{

	return 0;
}