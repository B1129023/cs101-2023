/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int multi(int i, int j){
    if(i==9 &j==9){
        printf("%d*%d=%d\n",i,j,i*j);
        return 0;
    }
    else if(j==9){
        printf("%d*%d=%d\n",i,j,i*j);
        j=1;
        return multi(i+1,j);
    }
    else{
        printf("%d*%d=%d\t",i,j,i*j);
        multi(i,j+1);
    }
}
int main()
{
    multi(1,1);

    return 0;
}
