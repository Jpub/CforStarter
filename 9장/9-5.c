#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1;i <= 10;i++) {
        printf("%d\n", i);
        if (i == 3) break;  /* 루프를 종료한다. */
    }
    return 0;
}
