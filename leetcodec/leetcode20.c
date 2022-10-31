/*给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
每个右括号都有一个对应的相同类型的左括号。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char * s){
    int num = strlen(s)/2;
    int pointer =1;
    char* stack = (char *)malloc(2*num+2);
    for(int i=0; i<strlen(s); i++){
        if(*(s+i)=='['||*(s+i)=='{'||*(s+i)=='('){
            *(stack+pointer)=*(s+i);
            pointer++;
        }
        else if(*(s+i)==']'){
            if(*(stack+pointer-1)=='['){
                pointer--;
                *(stack+pointer)='0';
            } 
            else{
                *(stack+pointer)=*(s+i);
                pointer++;
            }
        }
        else if(*(s+i)=='}'){
            if(*(stack+pointer-1)=='{'){
                pointer--;
                *(stack+pointer)='0';
            } 
            else{
                *(stack+pointer)=*(s+i);
                pointer++;
            }
        }
        else if(*(s+i)==')'){
            if(*(stack+pointer-1)=='('){
                pointer--;
                *(stack+pointer)='0';
            } 
            else{
                *(stack+pointer)=*(s+i);
                pointer++;
            }
        }
    }
    if(pointer==1&&strlen(s)!=1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char* temp = "[()]{";
    int result = isValid(temp);
    printf("result = %d",result);

    return 0;
}
