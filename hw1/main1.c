/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int count=1;
    char a[]="AABBBCCCCdd";
    for(int i=1;i<(unsigned)sizeof(a);i++){
        if(a[i]==a[i-1]){
            count+=1;
        }
        else{
            printf("%c%d",a[i-1],count);
            count=1;
        }
    }

    return 0;
}

