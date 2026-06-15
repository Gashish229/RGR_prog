#include <stdio.h>
#include <stdlib.h>

struct TreeNode { int data; struct TreeNode *left, *right; };

struct TreeNode* insert(struct TreeNode* node, int data) {
    if (node == NULL) {
        struct TreeNode* temp = malloc(sizeof(struct TreeNode));
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (data < node->data) node->left = insert(node->left, data);
    else if (data > node->data) node->right = insert(node->right, data);
    return node;
}
