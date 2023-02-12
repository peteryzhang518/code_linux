#include "stack.h"

bool init_stack(Stack* stack)
{
    stack = (Data*)malloc(STACK_INIT_SIZE * sizeof(Data*));
    
    stack->top = stack;
    stack->bottom = stack;

    stack->size = STACK_INIT_SIZE ;
    return 1; 
}



bool stack_is_empty(const Stack*  const stack);
{
    return 0;
}



bool stack_push(Stack* stack, const Data* const data)
{
    if (!stack->top) {
        stack = (Data*)realloc( o    
        stack->base,( stack->stack_size + STACKINCREMENT ) * sizeof(DataType));
    }
    stack->top = stack->top+1; 
    stack->top = data;
    
    return 1;
}



bool stack_pop (Stack *stack,  Data *data);
{
    if (
}
