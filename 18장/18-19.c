#include <stdio.h>

int olympic(int year);

enum {
    OLYMIPC_NON,
    OLYMIPC_SUMMER,
    OLYMIPC_WINTER,
};

int main(void)
{
    int year,hold;
    
    scanf("%d",&year);
    hold = olympic(year);
    
    switch (hold) {
    case OLYMIPC_NON:
        printf("열리지 않음\n");
        break;
    case OLYMIPC_SUMMER:
        printf("하계올림픽\n");
        break;
    case OLYMIPC_WINTER:
        printf("동계올림픽\n");
        break;
    };

    return 0;
}

int olympic(int year)
{
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return OLYMIPC_SUMMER;
        } else {
            return OLYMIPC_WINTER;
        }
    } else {
        return OLYMIPC_NON;
    }
    
}
