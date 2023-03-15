/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int check_repeat_number(int a[],int c,int n){
    int i=0;
    while(1){
        if(c==a[i]){
            c=rand()%69+1;
            i=0;
            continue;
        }
        if(i==n){
            break;
        }
        i+=1;
    }
    return c;
}
int check_special_number(int a[],int c){
    int i=0;
    while(1){
        if(c==a[i]){
            c=rand()%10+1;
            i=0;
            continue;
        }
        if(i==6){
            break;
        }
        i+=1;
    }
    return c;
}
int main()
{
    FILE* fp;
    int n;
    int a[7];
    srand((unsigned) time(NULL));
    time_t curtime;
    time(&curtime);
    char* ct=ctime(&curtime);
    ct[strlen(ct)-1]='\0';
    
    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問你要購買幾組樂透彩：");
    scanf("%d",&n);
    printf("已為您購買的 %d 組樂透組合輸出至 lotto.txt",n);
    fp=fopen("lotto.txt","w+");
    fprintf(fp,"======== lotto649 ==========\n");
    fprintf(fp,"= %s = \n",ct);
    for(int i=1;i<=5;i++){
        fprintf(fp,"[%d]： ",i);
        for(int j=0;j<7;j++){
            if(i>n){
                fprintf(fp,"-- ");
                continue;
            }
            if(j==6){
                a[j]=rand()%10+1;
                a[j]=check_special_number(a,a[j]);
                if(a[j]<10){
                    fprintf(fp,"0%d ",a[j]);
                }
                else{
                    fprintf(fp,"%d ",a[j]);
                }
            }
            else{
                a[j]=rand()%69+1;
                a[j]=check_repeat_number(a,a[j],j);
                if(a[j]<10){
                    fprintf(fp,"0%d ",a[j]);
                }
                else{
                    fprintf(fp,"%d ",a[j]);
                }            
            }
        }
        fprintf(fp,"\n");
    }
    fprintf(fp,"======== csie@CGU ==========\n");
    fclose(fp);
    return 0;
}
