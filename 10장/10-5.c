#include <stdio.h>

int main(void)
{
    int year = 0;
    double money = 10000;
    
    while (money < 15000) {
        year++;
        money *= 1.01;
    }
    
    printf("%d , %f\n", year , money);
    
    return 0;
}
