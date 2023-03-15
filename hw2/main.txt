#include <stdio.h>

int main()
{
    FILE* fp = fopen("main.c", "r+");
    FILE* txt = fopen("main.txt", "w+");
    char c;
    while ((c = fgetc(fp)) != EOF) {
        fputc(c, txt);
    }
    fclose(fp);
    fclose(txt);
    return 0;
}
