#include <stdio.h>
#include <stdlib.h>
#include "../../mylib/stack/stack.h" 

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param root TreeNode类 
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize ) {
    // write code here
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    init_stack(stack);
    int* result = (int *)malloc(sizeof(int) * 30);
    *returnSize = 0;
    while (root || (stack->top - stack->bottom != 0)) {
        while (root) {
            stack_push(stack, (Data*)(root));
            root = root->left;
        }
        stack_pop(stack, (Data**)&root);

        *(result + *returnSize) = root->val;
        (*returnSize)++;

            root = root->right;
    } 

    return result;
}


int main ()
{
    
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));    



    root->val = 1;
    root->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right = NULL;
    root->left->val = 2;
    root->left->left= NULL;
    root->left->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->right->val = 3; 
    root->left->right->left = NULL;
    root->left->right->right = NULL;

    int resultSize = 0;
    int* result = NULL;
     
    result = inorderTraversal(root, &resultSize);

    for(int i = 0; i < resultSize; i++) {
        printf(" %d \n " , *(result + i));
    }

    return 0;
}
