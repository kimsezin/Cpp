#include<iostream>
#include<cstring>

using namespace std;

//배열 넘길때는 첫번쨰것만 빈칸으로하고 파라미터 받아 처리 나머지는 직접 넣어줘야함
int sum_2d_array(const int (*_array)[3], int _row_cnt)
{
	int sum = 0;
	for (int r = 0; r < _row_cnt; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			sum = sum + *(*(_array+r) + c);
		}
	}
	return sum;
}
int sum_3d_array(int (*_array)[2][3], int _row_cnt)
{
	int sum = 0;
	for (int r = 0; r < _row_cnt; r++)
	{
		for (int c = 0; c < 2; c++)
		{
			for (int k = 0; k < 3; k++)
			{
				sum = sum + *(*(*(_array + r) + c) + k);
			}
		}
	}
	return sum;
}
int main()
{
	int array_2d_a[2][3] = {
		{1,1,1},
		{2,2,2}
	};
	
	int array_3d_a[2][2][3] = {
		{{1,1,1}, {1,1,1}},
		{{2,2,2}, {2,2,2}}
	};
	cout << "Sum : " << sum_2d_array(array_2d_a,2) << endl;
	cout << "Sum 3d : " << sum_3d_array(array_3d_a, 2) << endl;
	return 0;

}

