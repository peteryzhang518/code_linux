#include "array.h"

int init_array(struct array* array) 
{
    array->arraySize = 0;
    array->top = (struct arrayNode*)malloc(sizeof(struct arrayNode)); 
    array->top->val = 0;
    array->bottow = array->top;
    return ret;
}

int array_push (struct array* array, Data* data)
{
    array->arraySize = array->arraySize + 1;
    array->bottow->val = data;
    struct arrayNode* newNode = (struct arrayNode*)malloc(sizeof(struct arrayNode));
    array->bottow->next = newNode;
    array->bottow = array->bottow->next;

    return ret;
}

int array_pop (struct array* array, Data** data)
{
    if (array->arraySize == 0) {
        return ret;
    }
    *data = array->top->val;
    array->arraySize = array->arraySize - 1;
    struct arrayNode* temp = array->top->next;
    free(array->top);
    array->top = temp;
    return ret;
}
