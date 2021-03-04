#include<iostream>

using namespace std;


//Class ����

//������, constructor : ��ü�� ����� ���� �ڵ����� ����Ǵ� �Լ�
//						�� �Լ��� Ŭ���� �̸��� ������ �̸��� ���´�.
//						�̰��� ��ȯ���� ����.
//						�뵵��? ��ü�� ��������� �ʱ�ȭ���� �����Ѵ�.

//SLL�� class�� object�� ����
//��, node�� SLL�� ���̴� �ڵ带 node�� �������Ѵ�.
//�� �ڱ� ������ �޶�ٵ��� �Ѵ�.

class node
{
public:
	int n;
	node* next;

	node(int v) :n(v), next(0)
	{
	}
	
	void addToSLL(node*& head)
	{
		if (head == 0)
		{
			head = this;
		}
		else
		{
			node* temp = head;
			while (temp->next != 0)
			{
				temp = temp->next;
			}
			temp->next = this;
		}
	}
	void showN()
	{
		cout << "n is :" << n << endl;
	}
};

class MySLL
{
public:
	node* head;
	node* last;
	int count;

	MySLL() : head(0), last(0), count(0)
	{

	}

	//SLL�� ����ִ� ��� node���� �����ִ� �Լ�
	void showALL()
	{
		if (count == 0)
		{
			cout << "No node";
			return;
		}
		node* temp = head;
		while (temp != 0)
		{
			cout << temp->n << endl;
			temp = temp->next;
		}
	}

	void addNode(node* new_one)
	{
		if (head == 0)
		{
			head = new_one;
			last = new_one;
			count = 1;
		}
		else
		{
			last->next = new_one;
			count++;
			last = new_one;
		}
	}
};
int main()
{
	//Object reference

	//node myobj(777); //struct node temp;
	//node& r_myobj = myobj;

	//r_myobj.n = 20;
	//myobj.showN();


	//Object pointer reference;

	//node* p_myobj = new node(777); //struct node* temp= malloc(...) 
	//node*& rp_myobj = p_myobj;
	//rp_myobj->n = 44;
	//p_myobj->showN();

	//delete p_myobj;

	node* a = new node(777);
	node* b = new node(888);

	MySLL my_sll;
	my_sll.addNode(a);
	my_sll.addNode(b);
	//my_sll.showALL();

	node* c = new node(999);
	node*& r_head = my_sll.head;


	c->addToSLL(r_head);

	my_sll.showALL();
	return 0;
}