#include <stdio.h>
int main (void)
{
    int no;
    scanf("%d",&no);
    if (no == 1) {
        printf("홍길동\n");
    } else if (no == 2) {
        printf("신사임당\n");
    } else if (no == 3) {
        printf("이순신\n");
    } else if (no == 4) {
        printf("김유신\n");
    } else {
        printf("그런 번호의 사람은 없다\n");
    }
    return 0;
}
