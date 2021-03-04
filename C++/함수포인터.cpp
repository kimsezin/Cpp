#include<iostream>
#include<cstring>

using namespace std;

void func_A(void)
{
	cout << "This is fucn_A" << endl;
}
void func_B(void)
{
	cout << "This is func_B" << endl;
}
int func_C(int k)
{
	cout << "This is func_C: " << k << endl;
	return k + 1;
}
int main()
{
	void (*pf) (void);
	pf = func_A;

	pf();

	pf = func_B;

	pf();

	int (*pf2) (int);
	//pf2 = func_C;
	pf2 = func_A;
	//cout << "After Call : " << pf2(5) << endl;;

	//return type / ÀÌ¸§ / parameter
	return 0;
}