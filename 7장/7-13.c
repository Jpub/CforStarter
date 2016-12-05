#include <stdio.h>

int main(void)
{
    int year;
    
    printf("연도를 입력해 주세요. :");
    scanf("%d", &year);
    
    if (year % 4 == 0) printf("하계올림픽\n");
    if (year % 2 == 0 && year % 4 != 0) printf("동계올림픽\n");
    if (year % 2 != 0) printf("올림픽 없음\n");
    
    return 0;
}
