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
    struct student data1,data2;
    
    /* data1에 대입 */
    data1.year = 3;
    data1.clas = 4;
    data1.number = 18;
    strcpy(data1.name, "MARIO");
    data1.stature = 168.2;
    data1.weight = 72.4;
    
    data2 = data1;      /* data1 내용을 data2에 복사 */
    
    /* data1과 data2의 내용을 표시 */
    printf("data1.year = %d : data2.year = %d\n", 
                                data1.year,data2.year);
    printf("data1.clas = %d : data2.clas = %d\n", 
                                data1.clas,data2.clas);
    printf("data1.number = %d : data2.number = %d\n",
                                data1.number,data2.number);
    printf("data1.name = %s : data2.name = %s\n",
                                data1.name,data2.name);
    printf("data1.stature = %f : data2.stature = %f\n", 
                                data1.stature,data2.stature);
    printf("data1.weight = %f : data2.weight = %f\n",
                                data1.weight,data2.weight);
                            
    return 0;
}
