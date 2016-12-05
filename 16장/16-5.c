#include <stdio.h>

struct student {
    int year;           /* 학년 */
    int clas;           /* 학급 */
    int number;         /* 출석번호 */
    char name[64];      /* 이름 */
    double stature;     /* 신장 */
    double weight;      /* 체중 */
};

int main(void)
{
    struct student data;
    
    data.year = 10;     /* year 요소에 접근 */
    printf("%d\n", data.year);
    
    return 0;
}
