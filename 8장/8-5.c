#include <stdio.h>

int main(void)
{
    int age;
    printf("나이:");
    scanf("%d",&age);
    if (age <= 3) {
        printf("유아 : 무료\n");
    } else {
        if (age <= 12) {
            printf("어린이 : 2500원\n");
        } else {
            printf("성인 : 4000원\n");
        }
    }
    return 0;
}
