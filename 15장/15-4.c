#include <stdio.h>

int main(void)
{
    char str[256];
    scanf("%s", &str[0]);    /* 0번 요소의 주소 */
    printf("%s\n", str);
    return 0;
}
