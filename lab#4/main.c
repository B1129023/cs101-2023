/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void replace_all(char* str,char oldChar,char newChar){
    while(*str){
        if((*str)==oldChar){
            *str=newChar;
        }
        str++;
    }
}
int main()
{
    char str[100], oldChar='a', newChar='A';
    printf("Enter any string：");
    scanf("%s",str);
    printf("\nString before replacing：\n%s",str);
    replace_all(str,oldChar,newChar);
    printf("\n\nString after replacing %c with %c：\n%s",oldChar,newChar,str);
    return 0;
}
