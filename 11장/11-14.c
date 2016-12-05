#include <stdio.h>

int tri(int,int);

int main(void)
{
    int base,height;
    
    scanf("%d,%d", &base, &height);
    printf("%d\n", tri(base, height));
    
    return 0;
}

int tri(int base,int height)
{
    return base * height / 2;
}
