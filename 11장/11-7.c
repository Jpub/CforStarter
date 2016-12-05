#include <stdio.h>

int sum(int);	/* 프로토타입 선언 */

int main(void)
{
    sum(50);	/* 50을 전달 */
    return 0;
}

int sum(int max)
{
    printf("%d\n", (1 + max) * max / 2);
    return 0;
}
