#include<iostream>
#include<string>

using namespace std;
class PrintData
{
public:
	void myprint(int i);
	void myprint(double d);
	void myprint(string s = "s is not given");
};