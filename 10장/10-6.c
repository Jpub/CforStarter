#include <stdio.h>

int main(void)
{
    int score;
    
    do {
        printf("점수를 입력하세요. :");
        scanf("%d", &score);
    } while (score < 0 || score > 100);
    
    printf("입력한 점수 %d\n", score);
    
    return 0;
}
