#include <stdbool.h>

 
//--------栈的顺序存储结构的结构体————————//
#define STACK_INIT_SIZE 5//顺序栈的初始分配的内存空间

typedef int Data;

struct Stack 
{
    Data** top;
    Data** bottom;
    int size;
};

 
 
//--------栈的基本操作的函数的数据原型——————//
//初始化栈：构造一个空栈 stack ,是栈其它操作的基础
bool init_stack(struct Stack* stack);

//判断栈是否为空
bool stack_is_empty(const struct Stack*  const stack);

//向栈中压入一个数据*data,使其成为新的栈顶元素
bool stack_push (struct Stack *stack, Data* data);

//若栈不空，用data 返回stack的栈顶元素，并返回true,否则返回false
//bool stack_top (const Stack*  const stack, Data *data);

//返回栈stack 中元素的个数，也就是栈的长度
//int stack_length (const Stack*  const stack);

//从栈底到栈顶遍历栈中元素，并输出栈中的每一个元素值。
//bool stack_traverse( const Stack*  const stack);

//如果栈不空，从栈中删除栈顶元素，并用data 返回
bool stack_pop (struct Stack *stack,  Data** data);

//清除栈中元素：执行此操作后，栈stack为空栈
//bool clear_stack(Stack* stack);

//销毁栈：执行此操作后，栈stack不再存在，栈的其它操作都不能进行，除非调用
//bool destroy_stack(Stack* stack);
