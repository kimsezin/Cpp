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
		cout << "����" << endl;
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

	cout << name << "�� " << age << "���̰� " << weight << "kg�̴�." << endl;*/
	//ofstream outFile;

	//outFile.open("yyy.txt");

	////��� �̸�, ����, ü��
	//cout << "Name :";
	//char name[50];
	//cin.getline(name, 50);// �̸����̿� ���鵵 �޾ƿ�
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