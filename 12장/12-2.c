#include <stdio.h>

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
    int count;	/* 초기화하지 않음(사실 해서는 안됨) */
    count++;
    printf("%d\n", count);
    return count;
}
