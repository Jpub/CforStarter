#include <stdio.h>

int main(void)
{
    int array1[] = {42,79,13,19,41};
    int array2[] = {1,2,3,4,5};
    int i;
    
    for (i = 0;i < sizeof(array2) / sizeof(array2[0]);i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }
    
    /* array1 전체 요소를 array2에 복사*/
    for (i = 0;i < sizeof(array2) / sizeof(array2[0]);i++) {
        array2[i] = array1[i];
    }
    
    for (i = 0;i < sizeof(array2) / sizeof(array2[0]);i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }
    
    return 0;
}

