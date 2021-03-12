#include<iostream>
#include<set>
#include<string>
using namespace std;

class Person
{
public:
	string name;
	int age;
	Person(string _name, int _age)
	{
		name = _name;
		age = _age;
	};
	bool operator < (const Person& p) const
	{
		if (name < p.name)
		{
			return true;
		}
		else if (name == p.name)
		{
			if (age < p.age)
			{
				return true;
			}
		}
		return false;
	}
};
int main()
{

	set<Person> myset;

	myset.insert(Person("john", 30));
	myset.insert(Person("john2", 21));
	myset.insert(Person("john3", 31));
	myset.insert(Person("john4", 19));
	myset.insert(Person("john5", 25));

	auto pos = myset.find(Person("john5", 27));
	//있으면 그 위치에대한 iterator
	//없으면 myset.end()
	//auto pos = myset.find(6);

	if (pos == myset.end())
	{
		cout << "Not found" << endl;
	}
	else
	{
		cout << "found :" << endl;
	}


	pair<set<Person>::iterator, bool> res = myset.insert(Person("john6",19));

	if (res.second == false)
	{
		cout << "Already exist" << endl;
	}
	else
	{
		cout << "Insertion success" << endl;
	}
	myset.erase(Person("john4",19));
	for (auto e : myset)
	{
		cout << e.name << " " << e.age << endl;
	}
	cout << endl;
	


	return 0;
}