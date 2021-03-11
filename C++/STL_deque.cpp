#include<iostream>
#include<deque>
#include<iterator>
//삽입 삭제는 list
//배열처럼 쓸거면 vector

//iterator : container 안의 데이터에 통일된 접근방법 제공
//STL에는 container와 iterator가 있음. 
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
	
	// 차례로 읽는다 by iterator
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

	// 중간에 끼워넣기 by iterator
	auto loc = mydeque.begin(); //cbegin(constant) 값을 바꿀 순 없음.
	advance(loc, 1);
	mydeque.insert(loc, 100);
	for (auto e = mydeque.begin(); e < mydeque.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 중간에 삭제
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