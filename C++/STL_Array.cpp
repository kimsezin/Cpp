#include<iostream>
#include<vector>
#include<algorithm>
#include<array>

using namespace std;
//vector는 동적으로 크기조절가능 but 속도가 느림
//속도가 중요할 땐 array를 사용 배열과 똑같지만 편한 함수 제공

//array 정의
//array<type, size>
//std::array<int, 3> a;
	//local일때와 global일때 초기화가 다름.
	//global일땐 다 0 local일때는 모름

//array에서 첫번째와 마지막 요소값
//array.front(), array.back()



int main()
{
	array<int, 3> my_array { 7,8,9 };
	array<int, 3> your_array{ 1,2,3 };
	my_array.fill(100);
	for (auto& e : my_array)
	{
		cout << e << " ";
	}

	my_array.swap(your_array);
	cout << endl;
	for (auto& e : my_array)
	{
		cout << e << " ";
	}
	/*cout << "Traditional for :" << endl;
	for (int i = 0; i < my_array.size(); i++)
	{
		cout << my_array[i] << " ";
	}
	cout << endl;

	cout << "at() :" << endl;
	for (int i = 0; i < my_array.size(); i++)
	{
		cout << my_array.at(i) << " ";
	}
	cout << endl;

	cout << "Range based for :" << endl;
	for (auto& e : my_array)
	{
		cout << e << " ";
	}
	cout << endl;

	cout << "Iterator :" << endl;
	for (auto i = my_array.begin(); i < my_array.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;

	cout << "Reverse Iterator :" << endl;
	for (auto i = my_array.rbegin(); i < my_array.rend(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/
	//cout << "front : " << my_array.front() << " back : " << my_array.back() << endl;
	
	
	return 0;

	
}