#include <iostream>
using namespace std;

struct Tree
{
	int data;
	
	Tree* left;
	Tree* right;
};

Tree* root = NULL;

void insert()
{
	Tree* node = new Tree;
	cout<<"Enter data: ";
	cin>>node->data;
	
	node->left = node->right = NULL;
	
	if(root == NULL)
	{
		root = node;
	}
	else
	{
		Tree* tempRoot = root;
		while(tempRoot)
		{
			if(node->data < tempRoot->data)
			{
				if(tempRoot->left == NULL)
				{
					tempRoot->left = node;
					break;
				}
				else
				{
					tempRoot = tempRoot->left;
				}
			}
			else if(node->data > tempRoot->data)
			{
				if(tempRoot->right == NULL)
				{
					tempRoot->right = node;
					break;
				}
				else
				{
					tempRoot = tempRoot->right;
				}
			}
			else
			{
				cout<<"Duplicate Data"<<endl;
				break;
			}
		}
	}
}

int minFinder(Tree* tempRoot)
{
	if(tempRoot == NULL)
	{
		return tempRoot->data;
	}
	else
	{
		while(tempRoot)
		{
			if(tempRoot->left == NULL)
			{
				return tempRoot->data;
			}
			else
			{
				tempRoot = tempRoot->left;
			}
		}
	}
}

int maxFinder(Tree* tempRoot)
{
	if(tempRoot == NULL)
	{
		return tempRoot->data;
	}
	else
	{
		while(tempRoot)
		{
			if(tempRoot->right == NULL)
			{
				return tempRoot->data;
			}
			else
			{
				tempRoot = tempRoot->right;
			}
		}
	}
}

Tree* Delete(int data,Tree* tempRoot)
{
	if(tempRoot == NULL)
	{
	}
	else
	{
		while(tempRoot)
		{
			if(data == tempRoot->data)
			{
				if(tempRoot->left == NULL && tempRoot->right == NULL)
				{
					return NULL;
				}
				else if(tempRoot->right != NULL)
				{
					tempRoot->data = minFinder(tempRoot->right);
					tempRoot->right =  Delete(tempRoot->data,tempRoot->right);
				}
				else if(tempRoot->left != NULL)
				{
					tempRoot->data = maxFinder(tempRoot->left);
					tempRoot->left = Delete(tempRoot->data,tempRoot->left);
				}
			}
			else if(data < tempRoot->data)
			{
				tempRoot->left = Delete(data,tempRoot->left);
				break;
			}
			else if(data > tempRoot->data)
			{
				tempRoot->right = Delete(data,tempRoot->right);
				break;
			}
		}
	}
	return tempRoot;
}

void inOrder(Tree* tempRoot)
{
	if(tempRoot == NULL)
	{
	}
	else
	{
		inOrder(tempRoot->left);
		cout<<"Data: "<<tempRoot->data<<endl;
		inOrder(tempRoot->right);
	}
}

int main()
{
	insert();
	insert();
	insert();
	inOrder(root);
	root = Delete(3,root);
	cout<<"After Deletion"<<endl;
	inOrder(root);
	return 0;
}