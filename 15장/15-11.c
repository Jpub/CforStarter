#include <stdio.h>

int main(void)
{
    int *p,i;
    p = &i;
    /* 일반 변수 방식으로 전환한 포인터 변수를 대입 */
    *p = 10;
    printf("*p = %d\n", *p);
    printf("i = %d\n", i);
    return 0;
}
