#include <stdio.h>
#include "/home/p/code/mylic/stack/stack.h"



struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};



int* preorderTraversal(struct TreeNode* root, int* returnSize ) {
    struct Stack stack;
    init_stack(stack);
    // write code here
    struct TreeNode* temp = temp; 
    while (
    
    stack_pop(stack,
    



    if ( temp->right ) {
        stack_push(stack,(Data*)temp->right);
    }
    if ( temp->left ) {
        stack_push(stack,(Data*)temp->left);
    }
    stack->stack_push(temp);
     
}



int main () 
{
     
    
    return 0;
}
