#include <stdio.h>
#include <string.h>

typedef struct {
    int year;		    /* 학년 */
    int clas;		    /* 학급 */
    int number;		    /* 출석번호 */
    char name[64];	    /* 이름 */
    double stature;	    /* 신장 */
    double weight;	    /* 체중 */
} student;

void student_print(student data);

int main(void)
{
    student data;
    
    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name, "MARIO");
    data.stature = 168.2;
    data.weight = 72.4;
    
    student_print(data);    /* 호출 */
    
    return 0;
}

void student_print(student data)
{
    printf(" [학년]:%d\n", data.year);
    printf(" [학급]:%d\n", data.clas);
    printf(" [출석번호]:%d\n", data.number);
    printf(" [이름]:%s\n", data.name);
    printf(" [신장]:%f\n", data.stature);
    printf(" [체중]:%f\n", data.weight);
    return;
}
