#include <stdio.h>

int main()
{
    FILE *src = fopen("data.txt", "rt");
    FILE *des = fopen("dst.txt", "wt");

    int ch;

    if (src == NULL || des == NULL)
    {
        puts("파일 오픈 실패!");
        return -1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, des); // src에 있는걸 dst에 복사?
    }
    if (feof(src) != 0)
    {
        puts("파일 복사 완료!");
    }
    else
    {
        puts("파일 복사 실패");
    }

    fclose(src);
    fclose(des);

    return 0;
}