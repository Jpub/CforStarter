#include <stdio.h>

int main(void)
{
    int data[] = {79,42,39,79,13,75,19};
    int i,sum = 0,avg;
    
    for (i = 0;i < sizeof(data) / sizeof(data[0]);i++) {
        sum += data[i];
    }
    
    avg = sum / (sizeof(data) / sizeof(data[0]));
    
    printf("%d\n", avg);
    return 0;
}
