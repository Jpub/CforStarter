#include <stdio.h>

int main(void)
{
    double money = 1;
    int month = 1;
    
    while (money < 1000000) {
        printf("%02d 달째 : %7.0f 원\n", month,money);
        money *= 2;
        month++;
    }
    printf("%02d 달째에 %7.0f 원이 되어、100만원을 넘는다.\n", month,money);
    
    return 0;
}
