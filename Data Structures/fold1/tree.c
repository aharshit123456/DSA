#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <queue>

struct BstNode
{
    int data;
    struct BstNode *left;
    struct BstNode *right;
};

struct BstNode *GetNewNode(int data)
{
    struct BstNode *newNode = (struct BstNode *)malloc(sizeof(struct BstNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct BstNode *Insert(struct BstNode *root, int data)
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

bool Search(struct BstNode *root, int data)
{
    if (root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if (data <= root->data)
        return Search(root->left, data);
    else
        return Search(root->right, data);
}

int FindMin(struct BstNode *root)
{
    if (root == NULL)
    {
        printf("Error: Tree is empty \n");
        return -1;
    }
    else if (root->left == NULL)
    {
        return root->data;
    }
    // Search in left subtree.
    return FindMin(root->left);
}

int FindMax(struct BstNode *root)
{
    if (root == NULL)
    {
        printf("Error: Tree is empty \n");
        return -1;
    }
    else if (root->right == NULL)
    {
        return root->data;
    }
    // Search in left subtree.
    return FindMax(root->right);
}

int findHeight(struct BstNode *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
}

// void levelorder(struct BstNode *root){

// };

void main()
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

    int number;
    scanf("%d", &number);
    if (Search(root, number) == true)
        printf("Found \n");
    else
        printf("Not Found \n");

    printf("The max is : %d \n", FindMax(root));
    printf("The min is : %d \n", FindMin(root));

    printf("The height of this tree is: %d \n", findHeight(root));
    levelorder(root);
}