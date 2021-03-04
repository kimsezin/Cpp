#include<iostream>
#include<cstring>

using namespace std;

void func_a(int& a)//�޾ƿ� �Ķ���Ϳ� a�̸� �߰���. �����Ϳ� ���� ���
{
	a = 100;

	return;
}
int main(void)
{
	int n;

	n = 10;
	func_a(n);

	cout << "n :" << n << endl;

	//��ûū ����ü�� �Լ��� �ѱ�� �����ϸ� ����Ǳ� ������ �뷮�� ����������
	//������ ���۷����� ����ϸ� �̸��� �ٿ� �� ����ü�� �״�� ����� �� ����.
	//�����ͷ� ������ �ּҰ� �Ѱ����⶧���� �ּҿ� �ٸ����� ���ϰų� �ϴµ�
	//��ȭ�� �ָ� �ش� ���ڸ� �ٽ� ����� �� ���Եȴ�.`+����

	/*int a = 55;
	int& ra = a;
	cout << "a: " << a << endl;
	cout << "ra: " << ra << endl;

	int k = 50;
	ra = k;

	cout << "a: " << a << endl;
	cout << "ra : " << ra << endl;
	cout << "k : " << k << endl;

	ra = 100;
	cout << "a: " << a << endl;
	cout << "ra : " << ra << endl;
	cout << "k : " << k << endl;*/

	//ra = 78;  

	//cout << "a: " << a << endl;
	//cout << "ra: " << ra << endl;

	//int& rra = a;
	//rra = 56;

	//cout << "a: " << a << endl;
	//cout << "ra : " << ra << endl;
	//cout << "rra : " << rra << endl;

	//int& ka = rra;
	//ka = 89;

	//cout << "a: " << a << endl;
	//cout << "ra : " << ra << endl;
	//cout << "rra : " << rra << endl;
	//cout << "ka : " << ka << endl;



	return 0;
}