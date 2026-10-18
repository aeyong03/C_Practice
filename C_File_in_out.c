#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    FILE *fwp = fopen("data.txt", "wt");
    if (fwp == NULL)
    {
        puts("쓰기 파일 오픈 실패!");
        return -1;
    }
    fputs("안녕하세요", fwp);
    fclose(fwp);

    FILE *fap = fopen("data.txt", "at");
    fputs("\nthis is added", fap);
    fclose(fap);

    FILE *frp = fopen("data.txt", "rt");
    if (frp == NULL)
    {
        puts("읽기 파일 오픈 실패!");
        return -1;
    }

    int ch;
    while ((ch = fgetc(frp)) != EOF)
    {
        printf("%s", ch);
    }
    printf("\n");

    fclose(frp);

    return 0;
}