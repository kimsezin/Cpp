#include<iostream>
#include<cstring>

int main()
{
	using namespace std;


	/*for (int k : a)
	{
		cout << sizeof(k) << endl;
	}*/


	/*for (auto k : a)
	{
		cout << sizeof(k) << endl;
	}

	int* pa = new int[5];
	for (int k : *pa)
	{
		cout << k << endl;
	}*/

	int a[5] = { 100,209,340, 4, 6 };
	int max_value = 0;

	for (auto k : a)
	{
		if (k > max_value)
		{
			max_value = k;
		}
	}

	cout << "max value is : " << max_value;
	return 0;
}