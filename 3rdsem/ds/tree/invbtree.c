// C Program Invert a Binary Tree using Recursive Postorder

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to return the root of the inverted tree
struct Node *mirror(struct Node *root)
{
    if (root == NULL)
        return NULL;

    // Invert the left and right subtree
    struct Node *left = mirror(root->left);
    struct Node *right = mirror(root->right);

    // Swap the left and right subtree
    root->left = right;
    root->right = left;

    return root;
}

void inOrder(struct Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

// Function to create a new node
struct Node *createNode(int x)
{
    struct Node *new_node =
        (struct Node *)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

int main()
{

    // Input Tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    inOrder(root);

    root = mirror(root);

    // Mirror Tree:
    //       1
    //      / \
    //     3   2
    //        / \
    //       5   4
    inOrder(root);
    return 0;
}