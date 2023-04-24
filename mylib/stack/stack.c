#include "stack.h"
#include <stdlib.h>
#include <stdio.h>


bool init_stack(struct Stack* stack)
{
    stack->top = (Data**)malloc(STACK_INIT_SIZE * sizeof(Data*));
    stack->bottom = stack->top;

    stack->size = STACK_INIT_SIZE;
    return 1; 
}



bool stack_is_empty(const struct Stack*  const stack)
{ 
    return  stack->top - stack->bottom == 0 ? true : false;
}



bool stack_push(struct Stack* stack, Data* data)
{
    if (stack->top - stack->bottom == stack->size-1) {
        stack = (struct Stack*)realloc(stack->bottom, stack->size * 2 * sizeof(Data*));
    }
    *stack->top = data;
    stack->top = stack->top+1; 
    
    return 1;
}



bool stack_pop (struct Stack *stack, Data** data)
{
    if (stack->top - stack->bottom != 0) {
        Data** temp = stack->top; 
        stack->top = stack->top-1; 
        temp = NULL;
        *data = *stack->top; 
    }
    
    return 0;
}
