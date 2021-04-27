#include <stdio.h>
void sum(int in, int out);
int main()
{
    int i = 0, j = 0;
    printf("시작!\n");
    sum(i, j);
    printf("종료!\n");
    return 0;
}

void sum(int in, int out)
{
    do
    {
        printf("0말고 입력: ");
        fflush(stdout);
        scanf_s("%d", &in);
        out += in;
        printf("덧셈결과 :%d", out);
    } while (in != 0);
}