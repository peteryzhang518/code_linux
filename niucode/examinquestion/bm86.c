#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solve(char* s, char* t )
{
    int pNum = 0;
    int anum1 = 0;
    int anum2 = 0;
    
    int k = strlen(s)>strlen(t) ? strlen(s) : strlen(t);
    int i = strlen(s);
    int j = strlen(t);
    char* result = (char*)malloc(k+2);
    *result = '0';
    *(result+k+1) = 0; 

    while ( i>0 || j>0 ) {
        if (i>0) {
            anum1 = (int)*(s+i-1)-48;
            i--;
        } else { 
            anum1 = 0;
        }
        if (j>0) {
            anum2 = (int)*(t+j-1)-48;
            j--;
        } else { 
            anum2 = 0;
        }
        *(result+k) =(char)((anum1 + anum2 + pNum)%10+48);   
        pNum = (anum1 + anum2 + pNum)/10;
        k--;
    }
    if ( pNum ==1 ) {
        *(result+k) = (char)(pNum+48);   
        return result;
    } else {   
        return result+1;
    }
}

int main()
{ 
    char* s = "1258994789086810959258888307221656691275942378416703768";
    char* t = "7007001981958278066472683068554254815482631701142544497";
    char* result = solve(s,t);

    printf("%s\n",result);

    return 0;
}
