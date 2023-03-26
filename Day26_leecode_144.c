#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
struct TreeNode* createTree() {
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = 1;
    root->left = NULL;
    root->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->val = 2;
    root->right->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->left->val = 3;
    root->right->left->left = NULL;
    root->right->left->right = NULL;
    root->right->right = NULL;
    return root;
}

void first(struct TreeNode *root, int i, int *a) {
    if(root==NULL) return ;
    a[i]=root->val;
    i++;

    if(root->left!=NULL){
        first(root->left,i,a);
    }else{
        first(root->right,i,a);
    }
}

int *preorderTraversal(struct TreeNode *root, int *returnSize) {
    first(root, 0, returnSize);
    return returnSize;
}

int main() {
    struct TreeNode *tree=createTree();
    int a[100]={0};
    int *pa=a;
    preorderTraversal(tree,pa);
    for (int i = 0; i < 100; ++i) {
        printf("%d\n",*(pa+i));
    }
}