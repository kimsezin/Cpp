#include<iostream>
#include<cstring>
#include<cctype>

using namespace std;

int main()
{
	char ch;

	while (1)
	{
		cin.get(ch); //엔터키까지 문자로 읽음
		cin.get();

		if (isalnum(ch)) cout << "alpha numeric" << endl;
		if (isalpha(ch)) cout << "alphabet" << endl;
		if (isblank(ch)) cout << "blank" << endl;
		if (isdigit(ch)) cout << "digit" << endl;
		if (isxdigit(ch)) cout << "hex digit" << endl;
		if (ispunct(ch)) cout << "punctuation" << endl;
		if (islower(ch))
		{
			cout << " lower, " << char(toupper(ch)) << endl;
		}
		if (isupper(ch))
		{
			cout << " upper, " << char(tolower(ch)) << endl;
		}

	}
	return 0;
}