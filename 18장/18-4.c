#include <stdio.h>

int main(void)
{
    const double EXCISETAX = 0.05;
    int price;
    printf("원가:");
    scanf("%d", &price);
    price = (int) ((1 + EXCISETAX)  *  price);
    printf("세금포함 가격:%d\n", price);
    return 0;
}
