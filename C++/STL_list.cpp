#include<iostream>
#include<list>
#include<iterator>
//���� ������ list
//�迭ó�� ���Ÿ� vector

//iterator : container ���� �����Ϳ� ���ϵ� ���ٹ�� ����
//STL���� container�� iterator�� ����. 
using namespace std;
int main()
{
	list<int> mylist;


	mylist.push_back(3);
	mylist.push_back(4);
	mylist.push_back(5);
	mylist.push_front(2);
	mylist.push_front(1);

	cout << "list front : " << mylist.front() << endl;
	cout << "list back : " << mylist.back() << endl;

	// ���ʷ� �д´� by iterator
	for (auto e = mylist.begin(); e != mylist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;
	for (auto e = mylist.rbegin(); e != mylist.rend(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// �߰��� �����ֱ� by iterator
	auto loc = mylist.begin(); //cbegin(constant) ���� �ٲ� �� ����.
	advance(loc, 1);
	mylist.insert(loc, 100);
	for (auto e = mylist.begin(); e != mylist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// �߰��� ����
	loc = mylist.begin();
	advance(loc, 4);
	mylist.erase(loc);
	for (auto e = mylist.begin(); e != mylist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;


	return 0;
}