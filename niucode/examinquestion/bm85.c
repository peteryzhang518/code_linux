#include <stdio.h>
#include <stdlib.h>

//0开头
//0-255点分割
//点不能相同,:fenge
//数字和字母
//

char* solve(char* IP ) {
    // write code here
    int flag=2;
    int i=0;
    while (*(IP+i)!=0) {
        if (*(IP+i)=='.') {
            if (flag == 1) {
                return "Neither";
            } else {    
                flag = 0;
                i++;
            }
        }else if (*(IP+i)==':' || ('A'<=*(IP+i) && *(IP+i)<='z')) {
            if (flag == 0) {
                return "Neither";
            } else {
                flag = 1;
                i++;
            }
        } else {
            i++;
        }
    }
    if (flag == 2 || *(IP+i-1)=='.' ||  *(IP+i-1)==':') {
        return "Neither";
    }

//ipv4
    if (flag == 0) {
        int sum = 0;
        int splitnum =0;
        char temp='0';
        int j=0; 
        while (*(IP+j)!=0) {
            if (sum > 255 || (*(IP+j)=='.' && *(IP+j+1)==0)) {
                return "Neither";
            }
            if (temp=='.') {
                if (*(IP+j)=='0' || *(IP+j)>'2' || *(IP+j)=='.') {
                    return "Neither";
                } else {
                    splitnum++;
                    sum=0;
                    temp=*(IP+j);
                    j++;
                }
            } else {
                sum=sum*10+((int)temp-48);
                temp=*(IP+j);
                j++;
            } 
        }
        if (splitnum!=3){
            return "Neither";
        }

//splitnum>3 || 
        return "IPv4";
//ipv6
    } else if (flag == 1) {
        int size=0;
        int j=0;
        int splitnum =0;
        char temp=*(IP+j);
        while (*(IP+j)!=0) {
            if (size>4 || splitnum>7 || (*(IP+j)==':' && *(IP+j+1)==0)) {
                return "Neither"; 
            }
            if (*(IP+j)==':') {
                if (temp==':') {
                    return "Neither"; 
                } else {
                    size=0;
                    temp=*(IP+j);
                    j++;
                }
            } else if (('e'<*(IP+j) && *(IP+j)<='z') || ('E'<*(IP+j) && *(IP+j)<='Z')) {
                return "Neither";
            } else {
                size++;
                temp=*(IP+j);
                j++;
            }
        }
        return "IPv6";
    }    
    return "Neither";
}

int main() {
    char *s = {"2001:0db8:85a3:0:0:8A2E:0370:7334"};
    
    printf("%s",solve(s));
     
    return 0;
}
    
