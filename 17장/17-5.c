#include <stdio.h>

int main(void)
{
    int i = 100;
    FILE *file;
    file = fopen("test.txt","w");
    fprintf(file,"%d",i);
    fclose(file);
    
    printf("%d\n", i);
    return 0;
}
