#include <stdio.h>

int main(void)
{
    int year;
    
    scanf("%d", &year);
    
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            printf("summer\n");
        } else {
            printf("winter\n");
        }
    } else {
        printf("do not\n");
    }
    
    return 0;
}
