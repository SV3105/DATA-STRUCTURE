#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data (-1 for no node ): \n");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    else
    {
        newnode->data = x;
        printf("enter left child of %d : \n", x);
        newnode->left = create();
        printf("enter right child of %d : \n", x);
        newnode->right = create();
        return newnode;
    }
}

void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        printf("%d\n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n", root->data);
    }
}

void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}

void main()
{
    struct node *root;
    root = 0;
    root = create();
    printf("preorder is :\n");
    preorder(root);
    printf("postorder id : \n");
    postorder(root);
    printf("inorder is :\n");
    inorder(root);
}