#include <stdio.h>

int main(void)
{
    int r;
    
    double s;
    
    do {
        printf("반지름은? :");
        scanf("%d", &r);
    } while (r < 0);
    
    s = r * r * 3.14;
    printf("면적은 %f 입니다.\n", s);
    
    return 0;
}
