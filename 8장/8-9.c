#include <stdio.h>
int main (void)
{
    int no;
    scanf("%d", &no);
    switch (no) {
    case 1:
        printf("홍길동\n");
        break;
    case 2:
        printf("신사임당\n");
        break;
    case 3:
        printf("이순신\n");
        break;
    case 4:
        printf("김유신\n");
        break;
    default:
        printf("그런 번호의 사람은 없다 \n");
        break;
    }
    return 0;
}
