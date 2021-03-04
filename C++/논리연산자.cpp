#include<iostream>
#include<cstring>

int main()
{
	using namespace std;

	int a(10), b(1);

	if ((a < b) and (b % 2 == 0))
	{
		cout << "1" << endl;
	}
	else if ((a < b) or (b % 2 == 0))
	{
		cout << "2" << endl;
	}
	else if (not (a < b))
	{
		cout << "3" << endl;
	}

	return 0;
}