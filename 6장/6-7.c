#include <stdio.h>

int main(void)
{
    int price;
    
    printf("정가를 입력해 주세요. :");
    scanf("%d",&price);
    
    printf("10%할인 = %d원\n", (int)(price * 0.9));
    printf("30%할인 = %d원\n", (int)(price * 0.7));
    printf("50%할인 = %d원\n", (int)(price * 0.5));
    printf("80%할인 = %d원\n", (int)(price * 0.2));
    
    return 0;
}
