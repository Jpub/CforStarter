#include <stdio.h>
#define EXCISETAX 0.03  /* 여기에 상수 선언 */
int main(void)
{
    int price;
    printf("원가:");
    scanf("%d", &price);
    price = (int) ((1 + EXCISETAX)  *  price);   /* 상수 사용 */
    printf("세금포함 가격:%d\n", price);
    return 0;
}
