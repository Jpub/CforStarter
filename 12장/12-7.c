#include <stdio.h>

int count;	/* 글로벌 변수 */

int countfunc(void);

int main(void)
{
    int count;	/* 같은 이름으로 선언*/
    
    countfunc();
    count = 10;
    countfunc();
    countfunc();
    printf("main : count = %d\n", count);
    return 0;
}

int countfunc(void)
{
    count++;
    printf("%d\n", count);
    return count;
}
