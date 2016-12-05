#include <stdio.h>

int main(void)
{
    int i,price;
    scanf("%d",&price);
    
    for (i = 1;i <= 9;i++) {
        printf("%d Percent off = %d\n", i * 10, (int) (price * ((10.0 - i) / 10)));
    }
    
    return 0;
}
