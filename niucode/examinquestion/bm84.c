#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsLen ) {
    // write code here
    int i = 0;
    int flag = 1;
    while(flag){
        for(int j=0; j<strsLen; j++){
            if( *(*(strs+i)+j)!=*(*(strs+i-1)+j) ){
                flag = 0;
                break;
            }
        }
        j++;
        result = j+1;
    }
}

int main(){
         
}
