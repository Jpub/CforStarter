#include <stdio.h>

int main(void)
{
    char c = 'A';                   /* 숫자 */
    int suuti;
    if (c >= '0' && c <= '9') {     /* 판단 부분 */
        suuti = c - '0';            /* 수치로 변환 */
    } else {
        suuti = 0;
    }
    printf("%d\n", suuti);
    return 0;
}
