#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool aaa(int& a, int& b)
{
	return a < b;
}

int main()
{
	vector<vector<int>> v3;
	v3.push_back({ 1,2,3 });
	v3.push_back({ 45,32 });
	v3.push_back({ 10,9,8,7 });

	cout << v3[0][2] << endl;
	cout << v3[2][0] << endl;
	v3[2].push_back(999);
	cout << v3[2][4] << endl;
	for (auto& e : v3)
	{

	}


	//--------------sorting---------------
	/*vector<int> v1 = { 45, 98, 34, 23, 66 };
	vector<int> v2;*/

	/*for (auto& e : v1)
	{
		cout << e << " ";
	}

	sort(v1.begin(), v1.end(), aaa);

	cout << "After sorting" << endl;
	for (auto& e : v1)
	{
		cout << e << " ";
	}*/






	//-----------------복사, 비교-----------------
	//v2 = v1;  벡터의 복사
	//for (auto& e : v1)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;
	//v2[0] = 0;
	//v2.push_back(1000);
	//for (auto& e : v2)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;

	//v2[0] = 0;
	////비교
	//if (v1 == v2)
	//{
	//	cout << "same" << endl;
	//}
	//else
	//{
	//	cout << "different" << endl;
	//}


	return 0;
}