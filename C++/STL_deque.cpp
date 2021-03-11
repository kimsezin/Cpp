#include<iostream>
#include<deque>
#include<iterator>
//���� ������ list
//�迭ó�� ���Ÿ� vector

//iterator : container ���� �����Ϳ� ���ϵ� ���ٹ�� ����
//STL���� container�� iterator�� ����. 
using namespace std;
int main()
{
	deque<int> mydeque;

	
	mydeque.push_back(3);
	mydeque.push_back(4);
	mydeque.push_back(5);
	mydeque.push_front(2);
	mydeque.push_front(1);

	cout << "deque front : " << mydeque.front() << endl;
	cout << "deque back : " << mydeque.back() << endl;
	
	// ���ʷ� �д´� by iterator
	for (auto e = mydeque.begin(); e < mydeque.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;
	for (auto e = mydeque.rbegin(); e < mydeque.rend(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// �߰��� �����ֱ� by iterator
	auto loc = mydeque.begin(); //cbegin(constant) ���� �ٲ� �� ����.
	advance(loc, 1);
	mydeque.insert(loc, 100);
	for (auto e = mydeque.begin(); e < mydeque.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// �߰��� ����
	loc = mydeque.begin();
	advance(loc, 4);
	mydeque.erase(loc);
	for (auto e = mydeque.begin(); e < mydeque.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;


	return 0;
}