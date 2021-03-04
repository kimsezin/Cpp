#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

using namespace std;

char* getname(void)
{
	char temp[101];
	cout << "Enter name : ";
	cin >> temp;

	char* pn = new char[strlen(temp) + 1];

	strcpy(pn, temp);

	return pn;
}

int main()
{
	char* name = getname();

	cout << "Name : " << name << endl;

	cout << "Name address : " << (int *)name << endl;

	delete[] name;
	return 0;
}