#include <iostream>
#include <queue>

using namespace std;

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

struct BstNode *GetNewNode(int data)
{
    struct BstNode *newNode = new BstNode;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
    {
        root = GetNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = Insert(root->right, data);
    }
    return root;
};

void LevelOrder(BstNode *root)
{
    if (root == NULL)
        return;
    queue<BstNode *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        BstNode *current = Q.front();
        cout << current->data << " ";
        if (current->left != NULL)
            Q.push(current->left);
        if (current->right != NULL)
            Q.push(current->right);
        Q.pop();
    }
}

void PreOrder(BstNode *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(BstNode *root)
{
    if (root == NULL)
        return;
    InOrder(root->left);
    printf("%d ", root->data);
    InOrder(root->right);
}

void PostOrder(BstNode *root)
{
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct BstNode *root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 17);
    root = Insert(root, 12);
    root = Insert(root, 16);
    root = Insert(root, 4);
    root = Insert(root, 9);

    LevelOrder(root);
    printf("\n");
    PreOrder(root);
    printf("\n");
    InOrder(root);
    printf("\n");
    PostOrder(root);
}