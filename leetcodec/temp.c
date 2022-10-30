#include <stdio.h>
#include <stdlib.h>

int main(){
// 字符数组不能以这样形式赋值就像int * a =3;
//    char** str = {"dog", "pig", "banana"};
//    if((*(*(str+2))+3)=='a'){
//        printf("%s",*(*(str))+2);
//    }
    char* str[] = {"dogadog", "amw", "zpq"};
    char** strs = str;
    
    printf("%c", **(strs+1) );
    printf("%c", *(*(strs)+1) );
    printf("%c", *(*(strs+1)+1));
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(){
//     char** str = {"dog", "pig", "banana"};
//     if((*(*(str+2))+3)=='a'){
//         printf("%s",*(*(str))+2);
//     }
//     return 0;
// }

