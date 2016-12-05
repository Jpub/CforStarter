#include <stdio.h>

int main(void)
{
    int score;
    printf("점수를 입력해 주세요. :");
    scanf("%d", &score);
    if (score > 100) score = 100;
    printf("점수는 %d점 입니다.\n",score);
    return 0;
}