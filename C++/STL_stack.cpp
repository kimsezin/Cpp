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
//container adaptor는 실제로 자료를 저장하는 곳은 아님.
//vector, deque같은 실질적인 container에 커버를 씌워 그 기능을 하게함.
//adaptor를 통해 그것처럼 행동하게끔 해줌

int main()
{
	//std::stack<int> mystack; default container을 이용해 stack을 만드는 것.
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