/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[]="ABC123";
    int shift=3;
    int temp;
    int len=(unsigned)sizeof(a)-1;
    for(int i=0;i<shift;i++){
        for(int j=0;j<len;j++){
            if(j==0){
                temp=a[j];
            }
            else if(j==len-1){
                a[j]=temp;
                continue;
            }
            a[j]=a[j+1];
        }
    }
    printf("%s",a);
}



