#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int count=0;

int hanoi(int n, char source, char target, char auxiliary, int move_count,char* ct,time_t curtime) {
    if (n > 0) {
        move_count = hanoi(n - 1, source, auxiliary, target, move_count,ct,curtime);
        
        FILE* fp=fopen("hanoi.txt","a");
        time(&curtime);
        ct=ctime(&curtime);
        ct[strlen(ct)-1]='\0';
        count+=1;
        fprintf(fp,"%d\t [%s]： 第%d盤從 %c 柱移到 %c\n",count,ct,n, source, target);
        fclose(fp);
        move_count += 1;
        
        move_count = hanoi(n - 1, auxiliary, target, source, move_count,ct,curtime);
    }
}

int main() {
    FILE* fp=fopen("hanoi.txt","w+");
    fclose(fp);
    putenv("TZ=Asia/Taipei");
    tzset();
    time_t curtime;
    char* ct;
    char source = 'A';
    char target = 'C'; 
    char auxiliary = 'B'; 
    int move_count = 0; 
    int n;
    printf("請輸入盤數：");
    scanf("%d", &n);
    hanoi(n, source, target, auxiliary, move_count,ct,curtime);
    return 0;
} 
