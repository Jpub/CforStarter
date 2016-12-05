#include <stdio.h>

int main(void)
{
    char str[256] = "DRAGON";
    scanf("%s", &str[6]);    /* 6번 요소의 주소 */
    printf("%s\n", str);
    return 0;
}
