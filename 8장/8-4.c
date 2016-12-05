#include <stdio.h>

int main(void)
{
    int age;
    printf("나이:");
    scanf("%d", &age);
    if (age <= 3) printf("유아 : 무료\n");
    if (age >= 4 && age <= 12) printf("어린이 : 2500원\n");
    if (age >= 13) printf("성인 : 4000원\n");
    return 0;
}
