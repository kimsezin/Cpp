#include<iostream>
#include<list>
#include<iterator>
//삽입 삭제는 list
//배열처럼 쓸거면 vector

//iterator : container 안의 데이터에 통일된 접근방법 제공
//STL에는 container와 iterator가 있음. 
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

	// 차례로 읽는다 by iterator
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

	// 중간에 끼워넣기 by iterator
	auto loc = mylist.begin(); //cbegin(constant) 값을 바꿀 순 없음.
	advance(loc, 1);
	mylist.insert(loc, 100);
	for (auto e = mylist.begin(); e != mylist.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 중간에 삭제
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