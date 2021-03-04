#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;

class Person
{
public:
	int age;
	Person() : age(0) { };

};


int main(void)
{
	vector<int> ivector;

	ivector.push_back(10);
	ivector.push_back(20);
	ivector.push_back(30);
	ivector.push_back(40);

	for (int i = 0; i < 4; i++)
	{
		cout << " " << ivector.at(i);
	}
	cout << endl;

	for (int i = 0; i < ivector.size(); i++)
	{
		cout << " " << ivector[i];
	}
	cout << endl;

	/*cout << ivector.empty() << endl;
	cout << "front : " << ivector.front() << endl;
	ivector.pop_back();
	cout << "back : " << ivector.back() << endl;

	for (auto& i : ivector)
	{
		cout << " " << i;
	}*/
	//cout << endl;

	for (auto p = ivector.begin(); p != ivector.end(); p++)
	{
		cout << " " << *p;
	}
	ivector.erase(ivector.begin() + 1);
	cout << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++)
	{
		cout << " " << *p;
	}
	ivector.insert(ivector.begin() + 1,999);
	cout << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++)
	{
		cout << " " << *p;
	}
	return 0;
}

//int main()
//{
//	Person p[10];
//
//
//	//for (auto& i : p)
//	//{
//	//	cout << "age : " << i.age << endl;
//	//}
//	////for (int i = 0; i < 10; i++)
//	//{
//	//	cout << "age : " << p[i].age << endl;
//	//}
//	return 0;
//}