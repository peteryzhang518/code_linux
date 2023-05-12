#include <stdio.h>
#include <stdlib.h>
#include "../../mylib/array/array.h" 

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};



int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
        // write code here
    struct array* array1 = (struct array*)malloc(sizeof(struct array));
    struct array* array2 = (struct array*)malloc(sizeof(struct array));
    struct array* arraytemp;
    init_array(array1);
    init_array(array2);
    array_push(array1, (Data*)root);
    int result[30][30] = {0};
    int i = 0, j = 0;

    while (array1->arraySize !=0 || array2->arraySize != 0) {
        if (array1->arraySize == 0) {  
            arraytemp = array1;
            array1 = array2;
            array2 = arraytemp; 
        }
        while (array1->arraySize != 0) {
            array_pop(array1,(Data**)&root);
            result[i][j] = root->val;
            if (root->left) {
                array_push(array2,(Data*)root->left);
            }
            if (root->right) {
                array_push(array2,(Data*)root->right);
            }
        }
        i++;
        j = 0;
    }
    *returnSize = i;
    **returnColumnSizes = j;

    return (int**)result;
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

    int resultcSize = 0;
    int resultSize = 0;
    int resultInt[30][30] = { 0 };
    int** result = &resultInt;
     
    result = levelOrder(root, &resultSize, &(&resultcSize));

    for(int i = 0; i < resultSize; i++) {
        printf(" %d \n " , *(result + i));
    }

    return 0;
}
