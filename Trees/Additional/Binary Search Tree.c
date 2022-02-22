//Binary Search tree

#include <stdio.h>
#include <stdlib.h>
#define COUNT 10

typedef struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
} * node;

node getnode(int item)
{
    node temp = (node)malloc(sizeof(struct Node));

    temp->left = NULL;
    temp->data = item;
    temp->right = NULL;

    return temp;
}

node insert(node root, int ele)
{
    if (root == NULL)
        return getnode(ele);
    else if (ele < root->data)
        root->left = insert(root->left, ele);
    else if (ele > root->data)
        root->right = insert(root->right, ele);

    return root;
}

void inorder(node root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(node root)
{
    if (root == NULL)
        return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

void print2DUtil(struct Node *root, int space) {
    if (root == NULL)
        return;
        
    space += COUNT;
    print2DUtil(root->right, space);
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
    print2DUtil(root->left, space);
}

void print2D(struct Node *root) {
   print2DUtil(root, 0);
}

int main() {
    node root = NULL;
    int e, ch = 1;

    while (ch != 5)
    {
        printf("\n\n1.Insert\n2.PreOrder\n3.InOrder\n4.PostOrder\n5.Display\n6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch)
        {
        case 1:
            printf("Element:");
            scanf("%d", &e);
            root = insert(root, e);
            break;

        case 2:
            preorder(root);
            break;

        case 3:
            inorder(root);
            break;

        case 4:
            postorder(root);
            break;
            
        case 5: print2D(root);
            postorder(root);
            break;

        case 6:
            printf("Exiting.");
            exit(1);

        default:
            printf("Wrong input!");
        }
    }
}
