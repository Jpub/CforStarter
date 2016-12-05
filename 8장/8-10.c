#include <stdio.h>
int main (void)
{
    int no;
    scanf("%d", &no);
    switch (no) {
    case 1:
        printf("남성\n");
        break;
    case 2:
        printf("여성\n");
        break;
    case 3:
        printf("남성\n");
        break;
    case 4:
        printf("남성\n");
        break;
    default:
        printf("그런 번호의 사람은 없다\n");
        break;
    }
    return 0;
}
