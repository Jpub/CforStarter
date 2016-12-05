#include <stdio.h>

#define GET_TRAPEZOID_AREA(A,B,H) (A + B) * H / 2

int main(void)
{
    int up,down,h,s;
    printf("윗변, 아랫변, 높이:");
    scanf("%d, %d, %d", &up, &down, &h);
    s = GET_TRAPEZOID_AREA(up, down, h);
    printf("면적:%d\n", s);
    return 0;
}
