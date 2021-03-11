#include<iostream>
#include<forward_list>
#include<iterator>
//삽입 삭제는 list
//배열처럼 쓸거면 vector

//iterator : container 안의 데이터에 통일된 접근방법 제공
//STL에는 container와 iterator가 있음. 
using namespace std;
int main()
{
	forward_list<int> myforward_list;


	myforward_list.push_front(5);
	myforward_list.push_front(4);
	myforward_list.push_front(3);
	myforward_list.push_front(2);
	myforward_list.push_front(1);

	cout << "forward_list front : " << myforward_list.front() << endl;
	//cout << "forward_list back : " << myforward_list.back() << endl;

	// 차례로 읽는다 by iterator
	for (auto e = myforward_list.begin(); e != myforward_list.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 중간에 끼워넣기 by iterator
	auto loc = myforward_list.begin(); //cbegin(constant) 값을 바꿀 순 없음.
	advance(loc, 1);

	myforward_list.insert_after(loc, 100);
	for (auto e = myforward_list.begin(); e != myforward_list.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// 중간에 삭제
	loc = myforward_list.begin();
	//advance(loc, 4);
	loc = next(loc);
	myforward_list.erase_after(loc);
	for (auto e = myforward_list.begin(); e != myforward_list.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	
	return 0;
}