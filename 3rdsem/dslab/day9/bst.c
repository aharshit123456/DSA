#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int item)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node *insert(struct Node *node, int data)
{
    if (node == NULL)
        return newNode(data);
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    return node;
}

struct Node *insertInverse(struct Node *node, int data)
{
    if (node == NULL)
        return newNode(data);
    if (data > node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data < node->data)
    {
        node->right = insert(node->right, data);
    }
    return node;
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void maxNode(struct Node *root)
{
    if (root->right == NULL)
    {
        printf("Max: %d\n", root->data);
    }
    else
    {
        maxNode(root->right);
    }
}

void minNode(struct Node *root)
{
    if (root->left == NULL)
    {
        printf("Min: %d\n", root->data);
    }
    else
    {
        minNode(root->left);
    }
}

int main()
{
    struct Node *root = newNode(50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    root = insert(root, 90);
    root = insert(root, 10);

    // Print inorder traversal of the BST
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");

    maxNode(root);
    minNode(root);
    /*-----------------------------------------------------*/
    struct Node *root2 = newNode(50);
    root = insertInverse(root2, 30);
    root = insertInverse(root2, 20);
    root = insertInverse(root2, 40);
    root = insertInverse(root2, 70);
    root = insertInverse(root2, 60);
    root = insertInverse(root2, 80);
    root = insertInverse(root2, 90);
    root = insertInverse(root2, 10);

    // Print inorder traversal of the BST
    inorder(root2);
    printf("\n");
    preorder(root2);
    printf("\n");
    postorder(root2);
    printf("\n");

    return 0;
}