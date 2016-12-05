#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[256],str2[] = "DRAGONQUEST";
    
    scanf("%s",str1);
    
    if (strcmp(str1,str2) == 0) {
        printf("같음\n");
    } else {
        printf("다름\n"); 
    }
    
    return 0;
}
