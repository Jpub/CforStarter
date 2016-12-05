#include <stdio.h>

int main(void)
{
    int suuti;
    scanf("%d", &suuti);
    if (suuti >= 8 && suuti <= 12) printf("8~12사이 입니다.\n");
    if (!(suuti >= 8 && suuti <= 12)) printf("8~12사이가 아닙니다.\n");
    return 0;
}
