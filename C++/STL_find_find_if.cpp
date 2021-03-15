#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class person
{
private:
	string name;
	int age;
public:
	person(string _name, int _age)
	{
		name = _name;
		age = _age;
	}
	void showPersonInfo()
	{
		cout << "name : " << name << ", age : " << age << endl;
	}
	int getAge()
	{
		return age;
	}
	string getName()
	{
		return name;
	}
	bool operator==(const person& p1)
	{
		if (name == p1.name)
		{
			if (age == p1.age)
			{
				return true;
			}
		}
		return false;
	}
};
int main()
{
	vector<person> peopleDB;
	peopleDB.push_back(person("mike1", 26));
	peopleDB.push_back(person("mike2", 22));
	peopleDB.push_back(person("mike3", 23));
	peopleDB.push_back(person("mike4", 27));
	peopleDB.push_back(person("mike5", 25));

	cout << "-----------------------------------" << endl;
	for (auto e : peopleDB)
	{
		e.showPersonInfo();
	}
	cout << "find-------------------------------" << endl;
	
	// 1. ã�� ������ iterator�� �̿��ؼ� ����,
	// 2. ã�� ���� ����
	// 3. ��ȯ������ iterator ��ġ
	auto pos = find(peopleDB.begin(), peopleDB.end(), person("mike2",22));

	if (pos == peopleDB.end())
	{
		cout << "Failed to find" << endl;
	}
	else
	{
		cout << "Success : "; 
		(*pos).showPersonInfo();
	}


	cout << "find_if----------------------------" << endl;

	//pos = find_if(peopleDB.begin(), peopleDB.end(), findCondition);

	// Lambda expression, ���� �Լ�
	// [](argument...) {����}

	pos = find_if(peopleDB.begin(), peopleDB.end(), 
		[](person& p1)
		{
			if (p1.getAge() == 27)
			{
				return true;
			}
			return false;
		});
	

	if (pos == peopleDB.end())
	{
		cout << "Failed to find" << endl;
	}
	else
	{
		cout << "Success : ";
		(*pos).showPersonInfo();
	}
	
	cout << "count----------------------------" << endl;
	int cnt = count(peopleDB.begin(), peopleDB.end(), person("mike2", 22));
	cout << "Count result : " << cnt << endl;

	cout << "count_if---------------------------" << endl;
	cnt = count_if(peopleDB.begin(), peopleDB.end(),
		[](person& p1)
		{
			if (p1.getAge() > 21)
			{
				return true;
			}
			return false;
		});
	cout << "Count_if result : " << cnt << endl;

	cout << "for_each---------------------------" << endl;
	for_each(peopleDB.begin(), peopleDB.end(),
		[](person& p1) {
			p1.showPersonInfo();
		});

	cout << "sort-------------------------------" << endl;
	sort(peopleDB.begin(), peopleDB.end(),
		//p1�� p2���� ������ �����ٸ� true�� �Ѱܴٿ�
		[](person& p1, person& p2)
		{
			if (p1.getAge() < p2.getAge())
			{
				return false;
			}
			return true;
		});

	for (auto e : peopleDB)
	{
		e.showPersonInfo();
	}
	return 0;
}