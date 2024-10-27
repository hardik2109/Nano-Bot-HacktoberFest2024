#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
struct node *BST_Searching(struct node *root, int key)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return BST_Searching(root->left, key);
    }
    else
    {
        return BST_Searching(root->right, key);
    }
}
void BST_Insertion(struct node *root,int key)
{
    struct node *prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(root->data==key)
        {
            printf("Cant insert %d,coz already in BST\n",key);
            return;
        }
        else if(root->data>key)
        {
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node *new=createnode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else{
        prev->right=new;
    }
}
int main()
{
    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);
    // finally the tree looks like
    //        5
    //       / \
    //      3   6
    //     / \    
    //    1   4

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    struct node *n = BST_Searching(p, 5);
    if (n != NULL)
    {
        printf("Element: %d is found\n", n->data);
    }
    else
    {
        printf("Element not found");
    }
    BST_Insertion(p,9);
    struct node *n1 = BST_Searching(p, 9);
    if (n1 != NULL)
    {
        printf("Element: %d is found\n", n1->data);
    }
    else
    {
        printf("Element not found");
    }
    printf("%d",p->right->right->data);
    return 0;
}
