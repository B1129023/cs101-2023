/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void print_roman_number(char c){
    switch(c){
        case '1':
            printf("I ");
            break;
        case '2':
            printf("II ");
            break;
        case '3':
            printf("III ");
            break;
        case '4':
            printf("IV ");
            break;
        case '5':
            printf("V ");
            break;
        case '6':
            printf("VI ");
            break;
        case '7':
            printf("VII ");
            break;
        case '8':
            printf("VIII ");
            break;
        case '9':
            printf("IX ");
            break;
    }
    
}
int main()
{
    char a[]="81c8g8u168";
    for(int i=0;i<(unsigned)sizeof(a)-1;i++){
        if(a[i]>=48 && a[i]<=57){
            print_roman_number(a[i]);
        }
        else{
            printf("%c ",a[i]);
        }
    }
    return 0;
}

