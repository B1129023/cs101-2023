/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[]="A3B4C6a9";
    int count=0;
    int size=sizeof(a)/sizeof(char);
    for(int i=0;i<size;i++)
    {
        if(a[i]<=57&&a[i]>=48)
        {
            count=a[i]-48;
            for(int j=0;j<count;j++)
            printf("%c",a[i-1]);
        }
    }
}

