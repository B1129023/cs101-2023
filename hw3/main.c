/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
typedef struct lottery {
    int receipt_id;
    int receipt_price;
    int lotto_set[5][7];
    char* receipt_time;
} lotto_record_t;

lotto_record_t record;

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
    char filename[20];
    char format[] = "lotto[%05d].txt";
    record.receipt_id = 1;
    FILE* fp;
    FILE* wfp;
    wfp=fopen("record.bin","rb");
    if(wfp==NULL){
        fopen("record.bin","wb");
    }
    while (1) {
        sprintf(filename, format, record.receipt_id);
        fp=fopen(filename,"r");
        if (fp == NULL) {
            break;
        }
        record.receipt_id++;
    }
    
    int n;
    int a[7];
    srand((unsigned) time(NULL));
    
    putenv("TZ=Asia/Taipei");
    tzset();
    time_t curtime;
    time(&curtime);
    record.receipt_time=ctime(&curtime);
    char* ct=record.receipt_time;
    ct[strlen(ct)-1]='\0';

    printf("請問你要購買幾組樂透彩：");
    scanf("%d",&n);
    record.receipt_price=n*100;
    if(n==0){
        int winning_numbers[3];
        printf("請輸入中獎號碼：");
        for (int i = 0; i < 3; i++){
            scanf(" %d", &winning_numbers[i]);
        }
        printf("輸入中獎號碼為：");
        for (int i = 0; i < 3; i++) {
            printf("%02d ",winning_numbers[i]);
        }
        printf("\n以下為中獎彩卷：\n");
        FILE* wfp = fopen("record.bin", "rb");
        int count, price,lotto_set[5][7];
        char time_str[32];
        fread(&count, sizeof(count), 1, wfp);
        printf("共有%d筆記錄\n", count);
        for (int i = 0; i < count; i++) {
            fread(&price, sizeof(price), 1, wfp);
            fread(time_str, sizeof(time_str), 1, wfp);
            printf("彩券 No. %d\n", i+1);
            printf("Receipt Time: %s\n", record.receipt_time);
            printf("Lotto Numbers:\n");
            for (int j = 0; j < 5; j++) {
                printf("[%d]: ", j+1);
                for (int k = 0; k < 7; k++) {
                    fread(&lotto_set[j][k], sizeof(int), 1, wfp);
                    printf("%02d ", lotto_set[j][k]);
                }
                printf("\n");
            }
        }
    fclose(wfp);
    }
    else if(0<n && n<=5){
        sprintf(filename, format, record.receipt_id);
        fp=fopen(filename, "w");
        if (fp == NULL) {
            printf("Failed to open file %s", filename);
            return 1;
        }
    
        wfp=fopen("record.bin","ab+");
        printf("已為您購買的 %d 組樂透組合輸出至%s",n,filename);
        fprintf(fp,"======== lotto649 ==========\n");
        fprintf(fp,"=======+ No. %05d +========\n",record.receipt_id);
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
                    record.lotto_set[i][j]=a[j];
                    fprintf(fp,"%02d ", record.lotto_set[i][j]);
                }
                else{
                    a[j]=rand()%69+1;
                    a[j]=check_repeat_number(a,a[j],j);
                    record.lotto_set[i][j]=a[j];
                    fprintf(fp,"%02d ", record.lotto_set[i][j]);
                }
            }
            fprintf(fp,"\n");
        }
        fprintf(fp,"======== csie@CGU ==========\n");
        fwrite(&record, sizeof(record), 1, wfp);
        fclose(wfp);
        fclose(fp);
    }
    return 0;
}