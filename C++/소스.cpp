#include <stdio.h>
void sum(int in, int out);
int main()
{
    int i = 0, j = 0;
    printf("����!\n");
    sum(i, j);
    printf("����!\n");
    return 0;
}

void sum(int in, int out)
{
    do
    {
        printf("0���� �Է�: ");
        fflush(stdout);
        scanf_s("%d", &in);
        out += in;
        printf("������� :%d", out);
    } while (in != 0);
}