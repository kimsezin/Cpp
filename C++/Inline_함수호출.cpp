#include<iostream>
#include<cstring>

using namespace std;

inline double calc_sum(double a, double b)
{
	return (a + b);
}
void main()
{
	//캐시는 CPU 안에있음 
	//inline은 오버헤드를 다 알고있어 
	//함수를 부를때마다 함수 부분으로 가지않고 함수를 복사해와
	//그자리에서 바로 실행해버림. CPU가 움직일 필요가없이 순서대로 실행하면됨.
	//컴파일러가 inline이 있으면 보고 판단해 좋을떈 쓰고 안좋을떈 안씀

	cout << calc_sum(1.0, 2.0) << endl;
	cout << calc_sum(2.0, 3.0) << endl;
	cout << calc_sum(3.0, 4.0) << endl;
	return;
}