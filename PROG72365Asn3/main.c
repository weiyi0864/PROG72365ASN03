// main.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

int main() {
    srand(time(NULL));
    struct Node* root = NULL;

    int num_chars = rand() % 10 + 11; // Random number between 11 and 20, inclusive

    printf("Inserting characters: ");
    for (int i = 0; i < num_chars; i++) {
        char random_char = 'a' + rand() % 26;
        printf("%c ", random_char);
        root = insert(root, random_char);
    }
    printf("\n");

    printf("Inorder traversal (sorted): ");
    inorder(root);
    printf("\n");

    printf("Number of nodes: %d\n", countNodes(root));
    printf("Tree height: %d\n", treeHeight(root));

    return 0;
}
