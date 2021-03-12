#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{
	map<string, int> mymap;
	map<int, string> mymap2;
	mymap.insert(make_pair("mike1", 24));
	mymap.insert(make_pair("mike2", 21));
	mymap.insert(make_pair("mike3", 20));
	mymap.insert(make_pair("mike4", 29));
	mymap.insert(make_pair("mike5", 19));


	//find ´ë¿ë
	cout << mymap["mike1"] << endl;
	cout << mymap["mike99"] << endl;
	

	for (auto e : mymap)
	{
		cout << e.first << ", " << e.second << endl;
	}

	//auto pos = mymap.find("mike13");
	//if (pos == mymap.end())
	//{
	//	cout << "Failed to find" << endl;
	//}
	//else
	//{
	//	cout << (*pos).first << ", " << (*pos).second << endl;
	//}

	pair<map<string,int>::iterator,bool> res = mymap.insert(make_pair("mike3", 99));
	if (res.second == true)
	{
		cout << "Insertion success" << endl;
	}
	else
	{
		cout << "Insertion failed : " << (*(res.first)).first << " " << (*(res.first)).second << endl;
	}

	mymap.erase("mike4");
	cout << endl;

	for (auto e : mymap)
	{
		cout << e.first << ", " << e.second << endl;
	}

	return 0;
}