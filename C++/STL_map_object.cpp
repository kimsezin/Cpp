#include<iostream>
#include<map>
#include<iterator>
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
	}
	bool operator <(const Person& p) const
	{
		if (name < p.name)
		{
			return true;
		}
		else if (name > p.name)
		{
			return false;
		}
		else
		{
			if (age < p.age)
			{
				return true;
			}
			return false;
		}
	}
};

int main()
{
	map<Person, int> mymap;

	mymap.insert(make_pair(Person("mike1", 24), 24));
	mymap.insert(make_pair(Person("mike2", 21), 21));
	mymap.insert(make_pair(Person("mike3", 19), 19));
	mymap.insert(make_pair(Person("mike4", 17), 17));
	mymap.insert(make_pair(Person("mike5", 30), 30));

	cout << mymap[Person("mike1", 24)] << endl;

	auto pos = mymap.find(Person("mike6", 24));
	if (pos == mymap.end())
	{
		cout << "Unable to find" << endl;
	}
	else
	{
		cout << (*pos).first.name << " " << (*pos).second << endl;
	}

	pair<map<Person, int>::iterator, bool> res = mymap.insert(make_pair(Person("mike5", 30), 30));
	
	if (res.second == true)
	{
		cout << "Insertion success" << endl;
	}
	else
	{
		cout << "Insertion failed :" << (*(res.first)).first.name << ", " << (*(res.first)).first.age << endl;
	}
	mymap.erase(Person("mike2", 21));

	for (auto e : mymap)
	{
		cout << e.first.name << ", " << e.first.age << " " << e.second << endl;
	}
}