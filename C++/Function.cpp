#include<iostream>
#include<cstring>

using namespace std;

// 1)int sum_array_element(int _array[], int _size)
// 2)int sum_array_element(int* _array, int _size)
int sum_array_element(const int* _array, int _size)
{
	int sum(0);

	for (int i = 0; i < _size; i++)
	{
		sum = sum + _array[i];
		_array[4] = 60;
	}

	return sum;
}
//�����͸� �����ٰ� ���� �ٲٴ°��� �������� const�� ��
int main()
{
	int array_a[5] = { 1,2,3,4,5 };

	int sum = sum_array_element(array_a, 5);

	cout << "Array Sum = " << sum << endl;
	return 0;
}