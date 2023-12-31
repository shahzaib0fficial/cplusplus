#include <iostream>

using namespace std;

struct Tree
{
    int data;
    int height;

    Tree* left;
    Tree* right;
};

Tree* root = NULL;

int height(Tree* node)
{
    if(node == NULL)
    {
        return 0;
    }
    else
    {
        return node->height;
    }
}

int balanceFactor(Tree* node)
{
    if(node == NULL)
    {
        return 0;
    }
    else
    {
        return height(node->left) - height(node->right);
    }
}

int maxFinder(int left,int right)
{
    return (right>left) ? right : left;
}

Tree* rightRotate(Tree* node)
{
    Tree* nodeLeft = node->left;
    Tree* nodeLeftRight = nodeLeft->right;

    nodeLeft->right = node;
    node->left = nodeLeftRight;

    node->height = 1 + maxFinder(height(node->left),height(node->right));
    nodeLeft->height = 1 + maxFinder(height(nodeLeft->left),height(nodeLeft->right));

    return nodeLeft;
}

Tree* leftRotate(Tree* node)
{
    Tree* nodeRight = node->right;
    Tree* nodeRightLeft= nodeRight->left;

    nodeRight->left = node;
    node->right = nodeRightLeft;

    node->height = 1 + maxFinder(height(node->left),height(node->right));
    nodeRight->height = 1 + maxFinder(height(nodeRight->left),height(nodeRight->right));

    return nodeRight;
}

Tree* insertInTree(Tree* tempRoot,Tree* node)
{
    if(tempRoot == NULL)
    {
        return node;
    }
    else
    {
        if(node->data < tempRoot->data)
        {
            tempRoot->left = insertInTree(tempRoot->left,node);
        }
        else if(node->data > tempRoot->data)
        {
            tempRoot->right = insertInTree(tempRoot->right,node);
        }
        else
        {
            cout<<"Duplicate Data"<<endl;
            return tempRoot;
        }

        tempRoot->height = maxFinder(height(tempRoot->left),height(tempRoot->right)) + 1;

        int balance = balanceFactor(tempRoot);

        //left left
        if(balance > 1 && node->data < tempRoot->left->data)
        {
            return rightRotate(tempRoot);
        }
        //right right
        else if(balance < -1 && node->data > tempRoot->right->data)
        {
            return leftRotate(tempRoot);
        }
        //left right
        else if(balance > 1 && node->data > tempRoot->left->data)
        {
            tempRoot->left = leftRotate(tempRoot->left);
            return rightRotate(tempRoot);
        }
        // right left
        else if(balance < -1 && node->data < tempRoot->right->data)
        {
            tempRoot->right = rightRotate(tempRoot->right);
            return leftRotate(tempRoot);
        }
        else
        {
            return tempRoot;
        }
    }
}

void createNode()
{
    Tree* node = new Tree;
    cout<<"Enter Data: ";
    cin>>node->data;
    node->height = 1;
    node->left = node->right = NULL;

    root = insertInTree(root,node);
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
    createNode();
    createNode();
    createNode();
    createNode();
    createNode();
    createNode();
    createNode();
    levelOder(root);
}
