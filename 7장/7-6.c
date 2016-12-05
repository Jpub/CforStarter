#include <stdio.h>

int main(void)
{
    int suuti;
    scanf("%d", &suuti);
    if (suuti == 10) printf("입력값은 10 입니다.\n");
    if (suuti > 10) printf("입력값은 10 보다 큽니다.\n");
    if (suuti < 10) printf("입력값은 10 보다 작습니다.\n");
    return 0;
}