#include<stdio.h>
#include<stdlib.h>


char * longestCommonPrefix(char ** strs, int strsSize){
    int i = 0;
    int j = 0;
    int flag = 1 < strsSize ? 1 : 0;
    while(flag){
        for(i = 1; i< strsSize; i++){
            if(  *(*(strs)+j)==0
               ||*(*(strs+i)+j)==0                          //应该加一整个数组的长度
               ||*(*(strs+i)+j)!=*(*(strs+i-1)+j)){
                flag=0;
                break;
            }
        }
        j++;
    }
    char* result = (char*)malloc(sizeof(char)*j); 
    int k = 0; 
    for(k; k<j-1; k++){
        *(result+k)=*(*strs+k); 
    }
    *(result+k)=0; 
    if(strsSize ==1){
        result = *strs;
    }
    return result;
}




int main(){
//    char * str[] = {"doger", "dog", "dosb"}; //这个地方不能写成 char ××因为这样赋值本质上不能直接接赋值的原因就是，一开始初始化一个指针，如果对其赋值的话是把一个地址复制成3,而不是把地址的值赋值成3i,或者char [][]因为这样赋值无法把他传递给 char××，
    char* str[]= {"doger"};
    char ** strs = str;
    int strsSize = 1;
    char* result = (char*)malloc(sizeof(char)*8); 
    result = longestCommonPrefix(strs,strsSize);
    printf("%s",result);

    return 0;
}
