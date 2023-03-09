/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    int a[]={1,2,3};
    char b[]="ABC";
    float c[]={1.1,1.2,1.3};
    
    int array_a[3]={};

    if((fp=fopen("a.bin","wb+"))==NULL){
        printf("Cannot open the file...");
        exit(1);
    }
    
    if(fwrite(a,sizeof(a),1,fp)!=1){
        printf("File write error....");
    }
    
    fseek(fp, 0, SEEK_SET);
    
    if(fread(array_a,sizeof(array_a),1,fp)!=1){
        printf("File read error....");
    }else{
        for(int i=0;i<3;i++){
            printf("%d",array_a[i]);
        }
    }
    return 0;
}
