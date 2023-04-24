/**
 * 
 * @param s string字符串 
 * @param n int整型 
 * @return string字符串
 */


#include <stdio.h>
#include <stdlib.h>

char* trans(char* s, int n ) {
    // write code here
    char* result = (char*)malloc(n);
    int i = n;
    int k = 0;
    while(i>=0){
        while(i>=0 && s[i]!=' '){
            i--;
        }
        
        int j = i+1;
        while(s[j]!=0 && s[j]!=' '){
            result[k] = s[j];
            j++;
            k++;
        }
        if(i>=0 && s[i]==' '){
            result[k] = ' ';
            k++;
            i--;
        }
    }

    for(int q = 0; q<n; q++){
        if('a'<=result[q] && result[q]<='z'){
            result[q]=(char)(result[q]-32);
        }else if('A'<=result[q] && result[q]<='Z'){
            result[q]=(char)(result[q]+32);
        }
    }

    return result;
}

int main(){
    char test[4] = {"h i"};
    
    char* result = trans(test,4);
    
    printf ("%s", result);

    return 0;
}
