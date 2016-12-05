#include <stdio.h>

int main(void)
{
    int array[] = {42,79,13,75,19};
    int i,sum = 0;
    
    for (i = 5-1;i >= 0;i--) {
        sum += array[i];
        printf("%d : ", array[i]);
    }
    
    printf("sum = %d\n", sum);
    return 0;
}
