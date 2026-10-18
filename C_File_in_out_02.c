#include <stdio.h>

int main()
{
    FILE *fwp = fopen("simple.txt", "wt");
    if (fwp == NULL)
    {
        puts("파일 오픈 실패");
        return -1;
    }

    fputc('A', fwp);
    fputc('B', fwp);
    fputc('C', fwp);
    fputs("\nMy name is Kim\n", fwp);
    fputs("Your name is Yoon\n", fwp);

    fclose(fwp);
    return 0;
}