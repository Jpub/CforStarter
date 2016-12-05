#include <stdio.h>
#include <string.h>

typedef struct {
    int year;           /* 학년 */
    int clas;           /* 학급 */
    int number;         /* 출석번호 */
    char name[64];      /* 이름 */
    double stature;     /* 신장 */
    double weight;      /* 체중 */
} student;

int main(void)
{
    student data;
    student *pdata;
    
    /* 초기화 */
    pdata = &data;
    /* 일반 변수 방식으로 전환 */
    (*pdata).year = 10;
    /* 일반 변수 방식으로 전환 */
    strcpy((*pdata).name,"MARIO");	
    
    return 0;
}
