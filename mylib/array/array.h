#include <stdio.h>
#include <stdlib.h>

#define ret 0
#define Data int

struct arrayNode
{
    int* val;
    struct arrayNode* next;
};

struct array
{
    int arraySize;
    struct arrayNode* top;
    struct arrayNode* bottow;
};

int init_array (struct array* array);

int array_push (struct array* array, Data* data);

int array_pop (struct array* array, Data** data);
