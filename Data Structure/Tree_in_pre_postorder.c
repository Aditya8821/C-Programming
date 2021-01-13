#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
struct node *insert(struct node *node, int data)
{
    if (node == NULL)
        return newnode(data);
    else if (data < node->data)
        node->left = insert(node->left, data);
    else
        node->right = insert(node->right, data);
}
int main()
{
    int Leaf_Nodes, i = 0, Leaf_Values;
    int choice, data, x, y, z;
    struct node *root = NULL, *Root_Value;
    while (choice != 5)
    {
        printf("\n1.INSERT\n2.PREORDER\n3.POSTORDER\n4.INORDER\n5.EXIT");
        printf("\nEnter Choice:- ");
        scanf("%d", &choice);
        switch (choice)       
        {
        case 1:
            printf("\nEnter ROOT node:- ");
            scanf("%d", &x);
            Root_Value = insert(root, x);
            printf("\n\tHow many nodes under root: ");
            scanf("%d", &Leaf_Nodes);
            for (i = 0; i < Leaf_Nodes; i++)
            {
                printf("Enter %d Node: ", i + 1);
                scanf("%d", &Leaf_Values);
                insert(Root_Value,Leaf_Values);
            }
            break;
        case 2:
            printf("\nPREORDER:- ");
            preorder(Root_Value);
            break;
        case 3:
            printf("\nPOSTORDER:- ");
            postorder(Root_Value);
            break;
        case 4:
            printf("\nINORDER:- ");
            inorder(Root_Value);
            break;
        case 5:
            exit(0);
        }
    }
}
