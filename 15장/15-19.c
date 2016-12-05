#include <stdio.h>

int getaverage(int *data);

int main(void)
{
    int average,array[10] = {15,78,98,15,98,85,17,35,42,15};
    average = getaverage(array);
    printf("%d\n", average);
    return 0;
}

int getaverage(int *data)
{
    int i,average = 0;
    for (i = 0;i < 10;i++) {
        average += data[i];  /* 포인터 변수인데? */
    }
    return average / 10;
}
