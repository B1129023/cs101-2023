/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int take_number(char c){
    return c-48;
}
int caculate_sum(int sum,int count){
    if(sum>0){
        if(sum==1){
            sum*=count;
        }
        else{
            sum=sum*10+count;
        }
    }
    if(sum<0){
        if(sum==-1){
            sum*=count;
        }
        else{
            sum=sum*10-count;
        }
    }
    return sum;
}
int main()
{
    char a[]="ac-99bc";
    int sum=1;
    int count;
    for(int i=0;i<(unsigned)sizeof(a)-1;i++){
        if(a[i]==45){
            sum*=(-1);
        }
        if(a[i]>47 && a[i]<58){
            count=take_number(a[i]);
            sum=caculate_sum(sum,count);
        }
    }
    printf("%d",sum);
    return 0;
    
}
