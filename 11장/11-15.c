#include <stdio.h>

int olympic(int year); /* 프로토타입 선언 */

int main(void)
{
    int year,hold;
    
    scanf("%d", &year);
    hold = olympic(year);
    
    switch (hold) {
    case 0:
        printf("열리지 않는다.\n");
        break;
    case 1:
        printf("하계올림픽\n");
        break;
    case 2:
        printf("동계올림픽\n");
        break;
    };
    
    return 0;
}

int olympic(int year)
{
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return 1;
        } else {
            return 2;
        }
    } else {
        return 0;
    }

}
