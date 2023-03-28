// bst.c
#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

// Utility function to create a new node
struct Node* newNode(char item) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Utility function to insert a new node with the given key
struct Node* insert(struct Node* node, char key) {
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

// Utility function to do inorder traversal of BST
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%c ", root->key);
        inorder(root->right);
    }
}

// Utility function to search for a key in the BST
struct Node* search(struct Node* root, char key) {
    if (root == NULL || root->key == key)
        return root;

    if (root->key < key)
        return search(root->right, key);

    return search(root->left, key);
}

// Utility function to count the number of nodes in the BST
int countNodes(struct Node* root) {
    if (root == NULL)
        return 0;
    else
        return 1 + countNodes(root->left) + countNodes(root->right);
}

// Utility function to determine the height of the BST
int treeHeight(struct Node* node) {
    if (node == NULL)
        return 0;
    else {
        int leftHeight = treeHeight(node->left);
        int rightHeight = treeHeight(node->right);

        return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
    }
}

