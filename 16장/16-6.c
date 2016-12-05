#include <stdio.h>
#include <string.h>

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
    
    strcpy(data.name,"MARIO");
    printf("%s\n", data.name);
    
    return 0;
}
