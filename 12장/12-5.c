#include <stdio.h>

int count;	/* 글로벌 변수 */

int countfunc(void);

int main(void)
{
    countfunc();
    countfunc();
    countfunc();
    
    return 0;
}

int countfunc(void)
{
    count++;
    printf("%d\n", count);
    return count;
}