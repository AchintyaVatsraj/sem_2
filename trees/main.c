//Trees Prog 1

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//a tree with left and right child ~ a Binary Search Tree
struct trees {
    struct trees* left;
    int data;
    struct trees* right;
};

void inorder(struct trees *root);
void preorder(struct trees *root);
void postorder(struct trees *root);
void insertBST(struct trees *head);


//create a new child node
struct trees *newTree(int item)
{
    struct trees *temp =  (struct trees *)malloc(sizeof(struct trees));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
// L - R - r
void inorder(struct trees *root)
{
    //printf("Welcome to inorder");
    if (root != NULL)
    {
        inorder(root->left); //left
        printf("\n\n InOrderData = %d \n \t", root->data); // root
        inorder(root->right); //right
    }
}

// R - L - r
void preorder(struct trees *root)
{
    //printf("Welcome to preorder");
    if(root != NULL)
    {

        printf("\n\n preOrder-data = %d \n", root->data);//root
        preorder(root->left); //left
        preorder(root->right); //right
    }
}


// L - r - R
void postorder(struct trees *root)
{
   // printf("Welcome to postOrder");
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("\n\n postOrder-data = %d \n ", root->data);
    }
}

//$$$$$$$$$$$$$$$$$$ IGNORE!!! $$$$$$$$$$$$$$$$$$$$

//void insertBST(struct trees *head)
//{
//
//    struct trees *nn;
//    nn = (struct trees *)malloc(sizeof(struct trees));
//    int b;
//    printf("Enter a Value: \n");
//    scanf("%d \n",&b);
//    nn->data = b;
//    nn->left = NULL;
//    nn->right = NULL;
//
//    if (false)
//    {
//
//    }
//    else if(true)
//    {
//
//    }
//}

// $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$4

struct node* insert(struct trees* root, int data)
{
    // If the tree is empty, return a new node
    if (root == NULL) return newTree(data);

    // Otherwise, Follow  the depth of the tree
    if (data < root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    // return the (unchanged*) node pointer
    return root;
}



int main() {

    struct trees *head = NULL;

    inorder(head);
//debug code
    struct node *root = NULL;
    root = insert(root, 32);

    //fill in the data
    insert(root, 64);
    insert(root, 12);
    insert(root, 50);
    insert(root, 50);
    insert(root, 99);
    insert(root, 8);

    // print inoder traversal of the BST
    inorder(root);
    preorder(root);
    postorder(root);

    //printf("test");



    return 0;
}
