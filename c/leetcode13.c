#include <stdio.h>
#include <string.h>


int romanToInt(char * s){
    int sum =0,tempnum=0,tempnum2=0;
    for(int i=0;i<strlen(s);i++){
            switch(*(s+i)){
                case 'I' :
                    tempnum=1;
                    break;
                case 'V' :
                    tempnum=5;
                    break;
                case 'X' :
                    tempnum=10;
                    break;
                case 'L' :
                    tempnum=50;
                    break;
                case 'C' :
                    tempnum=100;
                    break;
                case 'D' :
                    tempnum=500;
                    break;
                case 'M' :
                    tempnum=1000;
                    break;
            }
            switch(*(s+i+1)){
                case 'I' :
                    tempnum2=1;
                    break;
                case 'V' :
                    tempnum2=5;
                    break;
                case 'X' :
                    tempnum2=10;
                    break;
                case 'L' :
                    tempnum2=50;
                    break;
                case 'C' :
                    tempnum2=100;
                    break;
                case 'D' :
                    tempnum2=500;
                    break;
                case 'M' :
                    tempnum2=1000;
                    break;
            }
        if(tempnum>=tempnum2||*(s+i+1)==0){
            sum=sum+tempnum;
        }
        else{
            sum=sum-tempnum;
        }
    }
    Return sum;
}


int main(){
    int i=0;
    int j=1;
    int k=2;
    int l = i==0? k++,j:k;
    printf("l=%d,j=%d,k=%d",l,j,k);


    char* s ="MCMXCII";
    i=romanToInt(s);
    printf("sum=%d",i);
    














    return 0;
}
