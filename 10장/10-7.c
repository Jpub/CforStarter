#include <stdio.h>

int main(void)
{
    
    int score = 0;
    
    do {
        if (score != 0) printf("0~100의 범위에서 입력해 주세요. \n");
        printf("점수를 입력해 주세요. :");
        scanf("%d", &score);
    } while (score < 0 || score > 100);
    
    printf("입력한 점수 %d\n",score);
    
    return 0;
}
