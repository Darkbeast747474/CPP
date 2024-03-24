#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *left;
	Node *right;
	Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
private:
	Node *root;

	bool Deleterec(Node *root, int value)
	{
		if (root == nullptr)
		{
			return false;
		}
		else
		{
			if (value == root->data)
			{
				root = root->right;
				return true;
			}
			else if (value < root->data)
			{
				Deleterec(root->left, value);
			}
			else
			{
				Deleterec(root->right, value);
			}
		}
	}
	Node *insertRec(Node *root, int value)
	{
		if (root == nullptr)
		{
			return new Node(value);
		}

		if (value < root->data)
		{
			root->left = insertRec(root->left, value);
		}
		else if (value > root->data)
		{
			root->right = insertRec(root->right, value);
		}

		return root;
	}

	bool searchRec(Node *root, int value)
	{
		if (root == nullptr)
		{
			return false;
		}
		if (root->data == value)
		{
			return true;
		}
		else if (value < root->data)
		{
			return searchRec(root->left, value);
		}
		else
		{
			return searchRec(root->right, value);
		}
	}

	void inorderTraversal(Node *root)
	{
		if (root != nullptr)
		{
			inorderTraversal(root->left);
			cout << root->data << " ";
			inorderTraversal(root->right);
		}
	}

public:
	BinaryTree() : root(nullptr) {}

	void insert(int value)
	{
		root = insertRec(root, value);
	}

	bool search(int value)
	{
		return searchRec(root, value);
	}

	bool Delete(int value)
	{
		return Deleterec(root, value);
	}

	void inorder()
	{
		inorderTraversal(root);
		cout << endl;
	}
};

int main()
{
	int n, value;
	BinaryTree tree;
	cout << "Enter The Number Of Nodes Of a Binary Tree: " << endl;
	cin >> n;
	cout << "Enter The Values For Binary Tree : " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		tree.insert(value);
	}

	cout << "Inorder traversal: ";
	tree.inorder();

	cout << "Enter The Value To Search: " << endl;
	cin >> value;
	if (tree.search(value))
	{
		cout << value << " is found in the tree." << endl;
	}
	else
	{
		cout << value << " is not found in the tree." << endl;
	}

	cout << "Enter The Value To Delete: " << endl;
	cin >> value;
	if(tree.Delete(value)){
		cout << value << " has Been Removed." << endl;
	}
	else
	{
		cout << value << " is not found in the tree." << endl;
	}
	
	cout << "Inorder traversal: ";
	tree.inorder();


	return 0;
}
