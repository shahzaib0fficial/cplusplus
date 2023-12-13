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

struct List
{
    int data;
    List* address;
};

List* Front = NULL;

void enQueue(Tree* node)
{
    if(Front == NULL)
    {
        Front = new List;
        Front->data = node->data;
        Front->address = NULL;
    }
    else
    {
        List* tempFront = Front;
        while(tempFront)
        {
            if(tempFront->address == NULL)
            {
                tempFront->address = new List;
                tempFront->address->data = node->data;
                tempFront->address->address = NULL;
                break;
            }
            else
            {
                tempFront = tempFront->address;
            }
        }
    }
}

void deQueue()
{
    Front = Front->address;
}

void searchInQueue(int data)
{
    Tree* tempRoot = root;
    while(tempRoot != NULL)
    {
        if(tempRoot->data == Front->data)
        {
            if(tempRoot->left != NULL)
            {
                enQueue(tempRoot->left);
            }
            if(tempRoot->right != NULL)
            {
                enQueue(tempRoot->right);
            }
            break;
        }
        else if(data < tempRoot->data)
        {
            tempRoot = tempRoot->left;
        }
        else
        {
            tempRoot = tempRoot->right;
        }
    }
}

void levelOder(Tree* node)
{
    if(node == NULL)
    {
        cout<<"Tree is Empty"<<endl;
    }
    else
    {
        enQueue(node);
        while(Front != NULL)
        {
            cout<<"Value : "<<Front->data<<endl;
            searchInQueue(Front->data);
            deQueue();
        }
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
    cout<<"Level Oder"<<endl;
    levelOder(root);
}
