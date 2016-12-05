#include <stdio.h>

int main(void)
{
    
    int r;
    double s;
    
    printf("반지름? :");
    scanf("%d", &r);
    if (r < 0) {
        printf("음수값은 입력할 수 없습니다.\n");
    } else {
        s = r * r * 3.14;
        printf("면적은 %f 입니다.\n", s);
    }
    
    return 0;
}
