#include <stdio.h>

int main(void)
{
    
    FILE *fp;
    
    fp = fopen("test.csv", "w");
    
    fprintf(fp,"번호, 이름, 시험 평균점수\n");
    fprintf(fp, "1, 홍길동, 0\n");
    fprintf(fp, "2, 이순신, 90\n");
    fprintf(fp, "3, 김유신, 40\n");
    fprintf(fp, "4, 신사임당, 70,\n");	
    
    fclose(fp);
    
    return 0;
}
