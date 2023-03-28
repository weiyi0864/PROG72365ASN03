// bst.h
#ifndef BST_H
#define BST_H

struct Node {
    char key;
    struct Node* left, * right;
};

struct Node* newNode(char item);
struct Node* insert(struct Node* node, char key);
void inorder(struct Node* root);
struct Node* search(struct Node* root, char key);
int countNodes(struct Node* root);
int treeHeight(struct Node* node);

#endif
