#include<iostream>
#include<cstring>

using namespace std;

inline double calc_sum(double a, double b)
{
	return (a + b);
}
void main()
{
	//ĳ�ô� CPU �ȿ����� 
	//inline�� ������带 �� �˰��־� 
	//�Լ��� �θ������� �Լ� �κ����� �����ʰ� �Լ��� �����ؿ�
	//���ڸ����� �ٷ� �����ع���. CPU�� ������ �ʿ䰡���� ������� �����ϸ��.
	//�����Ϸ��� inline�� ������ ���� �Ǵ��� ������ ���� �������� �Ⱦ�

	cout << calc_sum(1.0, 2.0) << endl;
	cout << calc_sum(2.0, 3.0) << endl;
	cout << calc_sum(3.0, 4.0) << endl;
	return;
}