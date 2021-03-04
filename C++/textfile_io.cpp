#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;
int main()
{
	ifstream inFile;

	inFile.open("numbers.txt");

	if (inFile.is_open() == false)
	{
		return -1;
	}

	int value;
	int sum(0);

	while (1)
	{
		if (inFile.good() == false)
		{
			break;
		}
		inFile >> value;
		sum = sum + value;
	}

	if (inFile.eof() == true)
	{
		cout << "Sum is : " << sum << endl;
		inFile.close();
	}

	else if (inFile.eof() == true)
	{
		cout << "실패" << endl;
		inFile.close();
		return -1;
	}




	/*ifstream inFile;

	inFile.open("yyy.txt");
	if (inFile.is_open() == false)
	{
		cout << "Unable to open the file" << endl;
		return -1;
	}

	char name[50];
	unsigned short age;
	double weight;

	inFile.getline(name, 50);
	inFile >> age;
	inFile >> weight;

	cout << name << "는 " << age << "살이고 " << weight << "kg이다." << endl;*/
	//ofstream outFile;

	//outFile.open("yyy.txt");

	////사람 이름, 나이, 체중
	//cout << "Name :";
	//char name[50];
	//cin.getline(name, 50);// 이름사이에 공백도 받아옴
	//outFile << name << endl;

	//cout << "Age :";
	//unsigned short age;
	//cin >> age;
	//outFile << age << endl;

	//cout << "Weight :";
	//double Weight;
	//cin >> Weight;
	//outFile << Weight << endl;


	return 0;
}