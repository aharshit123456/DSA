/*
Program to implement avL AVL Tree
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int maximum(int a, int b)
{
    return (a > b) ? a : b;
}

int height(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->height;
}

// implementing binary search tree
struct node *insert_node(struct node *root, int key)
{
    if (root == NULL)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = key;
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->height = 1;
        return new_node;
    }

    if (key < root->data)
    {
        root->left = insert_node(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = insert_node(root->right, key);
    }
    else
    {
        return root; // Duplicate keys are not allowed
    }

    root->height = 1 + maximum(height(root->left), height(root->right));

    return root;
}

void print_inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_inorder(root->left);
    printf("%d ", root->data);
    print_inorder(root->right);
}

void print_preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    print_preorder(root->left);
    print_preorder(root->right);
}
void print_inorder_bst(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_inorder_bst(root->left);
    printf("%d ", root->data);
    print_inorder_bst(root->right);
}

void print_preorder_bst(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    print_preorder_bst(root->left);
    print_preorder_bst(root->right);
}

void print_postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_postorder(root->left);
    print_postorder(root->right);
    printf("%d ", root->data);
}
/*****************************************************************************************/

// implementing avl tree rotation functions
struct node *left_rotation(struct node *root)
{
    struct node *new_root = root->right;
    struct node *temp = new_root->left;

    new_root->left = root;
    root->right = temp;

    // update height
    root->height = 1 + maximum(height(root->left), height(root->right));
    new_root->height = 1 + maximum(height(new_root->left), height(new_root->right));

    return new_root;
}

struct node *right_rotation(struct node *root)
{
    struct node *new_root = root->left;
    struct node *temp = new_root->right;

    new_root->right = root;
    root->left = temp;
    // update height
    root->height = 1 + maximum(height(root->left), height(root->right));
    new_root->height = 1 + maximum(height(new_root->left), height(new_root->right));

    return new_root;
}

struct node *left_right_rotation(struct node *root)
{
    root->left = left_rotation(root->left);
    return right_rotation(root);
}

struct node *right_left_rotation(struct node *root)
{
    root->right = right_rotation(root->right);
    return left_rotation(root);
}

int get_balance(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return height(root->left) - height(root->right);
}

struct node *balance_tree(struct node *root)
{
    int balance = get_balance(root);

    if (balance > 1 && get_balance(root->left) >= 0)
    {
        return right_rotation(root);
    }

    if (balance > 1 && get_balance(root->left) < 0)
    {
        return left_right_rotation(root);
    }

    if (balance < -1 && get_balance(root->right) <= 0)
    {
        return left_rotation(root);
    }

    if (balance < -1 && get_balance(root->right) > 0)
    {
        return right_left_rotation(root);
    }

    return root;
}

struct node *insert_node_avl(struct node *root, int key)
{
    if (root == NULL)
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = key;
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->height = 1;
        return new_node;
    }

    if (key < root->data)
    {
        root->left = insert_node_avl(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = insert_node_avl(root->right, key);
    }
    else
    {
        return root; // Duplicate keys are not allowed
    }

    root->height = 1 + maximum(height(root->left), height(root->right));

    root = balance_tree(root);

    return root;
}

void bfs(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    struct node *queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front < rear)
    {
        struct node *temp = queue[front++];
        printf("%d ", temp->data);

        if (temp->left != NULL)
        {
            queue[rear++] = temp->left;
        }

        if (temp->right != NULL)
        {
            queue[rear++] = temp->right;
        }
    }
}

int main()
{
    struct node *root = NULL;
    root = insert_node(root, 2);
    root = insert_node(root, 1);
    root = insert_node(root, 3);
    root = insert_node(root, 4);
    root = insert_node(root, 0);
    root = insert_node(root, 7);
    root = insert_node(root, 5);
    root = insert_node(root, 6);

    print_inorder(root);
    printf("\n");
    print_preorder(root);
    printf("\n");
    print_postorder(root);
    printf("\n");
    bfs(root);
    printf("\n");
    printf("\n");
    printf("/******************AVL TREE******************/\n");
    printf("\n");

    struct node *root2 = NULL;
    root2 = insert_node_avl(root2, 2);
    root2 = insert_node_avl(root2, 1);
    root2 = insert_node_avl(root2, 3);
    root2 = insert_node_avl(root2, 4);
    root2 = insert_node_avl(root2, 0);
    root2 = insert_node_avl(root2, 7);
    root2 = insert_node_avl(root2, 5);
    root2 = insert_node_avl(root2, 6);

    print_inorder(root2);
    printf("\n");
    print_preorder(root2);
    printf("\n");
    print_postorder(root2);
    printf("\n");
    bfs(root);

    return 0;
}