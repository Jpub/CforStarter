#include <stdio.h>

void func(int *pvalue);	 /* 프로토타입 선언 */

int main(void)
{
    int value = 10;
    printf("&value = %p\n", &value);
    func(&value);	        /* 주소를 전달 */
    printf("value = %d\n", value);
    return 0;
}

void func(int *pvalue) 
{
    printf("pvalue = %p\n", pvalue);
    *pvalue = 100;		/* 일반 변수 모드로 전환하고 대입 */
    return;
}