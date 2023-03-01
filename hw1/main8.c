/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define swap(a,b) \
    int temp=a;   \
    a=b;          \
    b=temp;
int main()
{
    char a[]="Hello";
    int len=(unsigned)sizeof(a)-1;
    int temp;
    for(int i=0;i<len/2;i++){
        swap(a[i],a[len-1-i]);
    }
    printf("%s",a);
    return 0;
}

