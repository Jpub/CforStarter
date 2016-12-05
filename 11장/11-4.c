#include <stdio.h>

int sum(void);	/* 프로토타입 선언 */

int main(void)
{
    sum();	/* 호출 부분  */
    return 0;
}

int sum(void)
{
    printf("%d\n", (1 + 100) * 100 / 2);
    return 0;
}
