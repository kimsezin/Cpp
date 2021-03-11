#include<iostream>
#include<forward_list>
#include<iterator>
//���� ������ list
//�迭ó�� ���Ÿ� vector

//iterator : container ���� �����Ϳ� ���ϵ� ���ٹ�� ����
//STL���� container�� iterator�� ����. 
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

	// ���ʷ� �д´� by iterator
	for (auto e = myforward_list.begin(); e != myforward_list.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// �߰��� �����ֱ� by iterator
	auto loc = myforward_list.begin(); //cbegin(constant) ���� �ٲ� �� ����.
	advance(loc, 1);

	myforward_list.insert_after(loc, 100);
	for (auto e = myforward_list.begin(); e != myforward_list.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	// �߰��� ����
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