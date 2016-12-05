#include <stdio.h>

int main(void)
{
    int *data;
    int i;
    int average = 0;
    int array[10] = {15,78,98,15,98,85,17,35,42,15};
    
    data = array;	               /* 포인터 변수에 배열 주소를 대입 */
    
    for (i = 0;i < 10;i++) {
        average += *(data + i);	/* 포인터 연산 */
    }
    
    printf("%d\n", average / 10);
    return 0;
}
