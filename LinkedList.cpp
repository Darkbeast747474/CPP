#include <iostream>
using namespace std;

class Node
{
public:
	int info = 0;
	Node *next = NULL;
};

Node *avail = new Node[40];
Node *GetNode()
{
	if (avail == NULL)
	{
		return new Node();
	}
	else
	{
		Node *newNode = avail;
		avail = avail->next;
		newNode->next = NULL;
		return newNode;
	}
}
void FreeNode(Node *node)
{
	node->next = avail;
	avail = node;
}

void InsertonatBeg(Node **head)
{
	int Info;
	cout << "Enter The Info You Wanna Insert: " << endl;
	cin >> Info;
	Node *New_node = GetNode();
	New_node->info = Info;
	New_node->next = (*head);
	*head = New_node;
}

void InsertionatEnd(Node **Last_node)
{

	int Info;
	cout << "Enter The Info You Wanna Insert: " << endl;
	cin >> Info;
	Node *New_node = GetNode();
	New_node->info = Info;
	New_node->next = NULL;
	(*Last_node)->next = New_node;
}
void InsertionafterSpecificNode(Node *list[], int n)
{
	int Info, loc;
	Node *New_node = GetNode();
	cout << "Enter The Info You Wanna Insert: " << endl;
	cin >> Info;
	cout << "Enter The Specific Location Of node after You Wanna Insert Another One: " << endl;
	cin >> loc;
	New_node->info = Info;
	if (list[0]->info == list[n]->info)
	{
		list[n]->next = New_node;
		New_node->next = NULL;
	}
	else
	{
		list[loc - 1]->next = New_node;
		New_node->next = list[loc];
	}
}

void Traverse(Node *head)
{
	Node *ptr = head;
	while (ptr != NULL)
	{
		cout << ptr->info << "\t";
		ptr = ptr->next;
	}
	cout << endl;
}

int main()
{
	int n;
	cout << "Enter The Number Of Elements: " << endl;
	cin >> n;
	Node *list[n];

	for (int i = 0; i < n; i++)
	{
		list[i] = GetNode();
	}

	for (int i = 0; i < n - 1; i++)
	{
		list[i]->next = list[i + 1];
	}

	cout << "Enter The Data In Your List" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Node " << i + 1 << ": ";
		cin >> list[i]->info;
	}

	Traverse(list[0]);

	InsertonatBeg(&list[0]);

	Traverse(list[0]);

	InsertionatEnd(&list[n - 1]);

	Traverse(list[0]);

	InsertionafterSpecificNode(list, n);

	Traverse(list[0]);

	Node *current = list[0];
	while (current != nullptr)
	{
		Node *temp = current;
		current = current->next;
		FreeNode(temp);
	}

	delete avail;
	return 0;
}
