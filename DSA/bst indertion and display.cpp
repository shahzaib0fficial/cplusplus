#include <iostream>

using namespace std;

struct Tree
{
    int data;

    Tree* left;
    Tree* right;
};

Tree* root = NULL;

void insertInTree()
{
    Tree* node = new Tree;
    cout<<"Enter Data: ";
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
            else
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
        }
    }
}

void inOrder(Tree* node)
{
    if(node == NULL)
    {

    }
    else
    {
        inOrder(node->left);
        cout<<"Value : "<<node->data<<endl;
        inOrder(node->right);
    }
}

void postOrder(Tree* node)
{
    if(node == NULL)
    {

    }
    else
    {
        postOrder(node->left);
        postOrder(node->right);
        cout<<"Value : "<<node->data<<endl;
    }
}

void preOrder(Tree* node)
{
    if(node == NULL)
    {

    }
    else
    {
        cout<<"Value : "<<node->data<<endl;
        preOrder(node->left);
        preOrder(node->right);
    }
}

int main()
{
    insertInTree();
    insertInTree();
    insertInTree();
    insertInTree();
    insertInTree();
    insertInTree();
    insertInTree();

    cout<<"In Oder"<<endl;
    inOrder(root);
    cout<<"Pre Oder"<<endl;
    preOrder(root);
    cout<<"Post Oder"<<endl;
    postOrder(root);
}
