#include "classcode1.h"
#include <stdio.h>

class1::class1():temp1(1){};
class1::~class1(){};

void class1::functionClass1(int n)
{
    temp1 = n;
    printf("this is class1 function");
}
