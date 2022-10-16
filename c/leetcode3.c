#include <stdio.h>
#include <stdlib.h>


int lengthOfLongestSubstring(char * s){
    int num=0;
    int i,j,temp;

    int flag=0;
    for(i=0;s[i+1]!=0;i++){
        for(j=i+1;s[j]!=0;j++){
            for(temp=i;temp<j;temp++){
                if(flag==1){
                    flag=0;
                }
                if(s[j]==s[temp]){
                    i=temp+1;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
            if((j-i+1)>num)
                num=j-i+1;
        }
    }
    return num;
}

int main (){
    char* test = {"abcabcbb"};
    int result = lengthOfLongestSubstring(test);
    printf("%d",result);
    return 0;
}
