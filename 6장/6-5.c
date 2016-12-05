#include <stdio.h>

int main(void)
{
    int min, max, sum;
    
    /* 입력 부분 */
    printf("최솟값과 최댓값을 ,로 구분해서 입력하세요 :");
    scanf("%d , %d", &min, &max);
    
    /* 계산 부분 */
    sum = (min + max) * (max - min + 1 ) / 2;
    
    /* 표시 부분 */
    printf("%d～%d 합계는 %d 입니다. \n", min, max, sum);
    return 0;
}