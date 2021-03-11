#include<iostream>
#include<stack>
#include<vector>
#include<iterator>
#include<queue>
#include<string>
class person 
{
public:
	std::string name;
	int age;
	person(std::string _name, int _age)
	{
		name = _name;
		age = _age;
	}
	void printPersonInfo()
	{
		std::cout << name << " is " << age << "years old. " << std::endl;
	}
};
//container adaptor�� ������ �ڷḦ �����ϴ� ���� �ƴ�.
//vector, deque���� �������� container�� Ŀ���� ���� �� ����� �ϰ���.
//adaptor�� ���� �װ�ó�� �ൿ�ϰԲ� ����

int main()
{
	//std::stack<int> mystack; default container�� �̿��� stack�� ����� ��.
	std::stack<int, std::vector<int>> mystack;
	mystack.push(5);
	mystack.push(4);
	mystack.push(3);

	std::cout << "top : " << mystack.top() << std::endl;
	std::cout << "size : " << mystack.size() << std::endl;
	std::cout << "empty : " << mystack.empty() << std::endl;
	while (!mystack.empty())
	{
		std::cout << mystack.top() << " ";
		mystack.pop();
	}
	std::cout << std::endl;



	std::queue<person> myqueue;
	myqueue.push(person("james", 30));
	myqueue.push(person("Cindy", 16));
	myqueue.push(person("sezin", 25));

	while (!myqueue.empty())
	{
		myqueue.front().printPersonInfo();
		myqueue.pop();
	}


	return 0;
}