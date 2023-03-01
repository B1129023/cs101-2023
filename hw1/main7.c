/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int power(int count,int a,int n){ 
    for(int i=1;i<n;i++){
        count*=a;        
    }
    return count;
}
int main()
{
    char b[]="11011110";
    int flag=4;
    int count=1;
    int sum=0;
    for(int i=0;i<8;i++,flag--){
        if(b[i]==49)
            sum=sum+power(count,2,flag);
        if(flag==1){
            printf("%X",sum);
            sum=0;
            count=1;
            flag=4;
        }
    }
}
