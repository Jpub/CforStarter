#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[256],lname[256];
    
    printf("성을 입력하십시오.:");
    scanf("%s",fname);
    
    printf("이름을 입력하십시오.:");
    scanf("%s",lname);
    
    strcat(fname,lname);
    printf("전체 이름은 %s\n", fname);
    
    return 0;
}
