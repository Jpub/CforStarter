#include <stdio.h>  

int main(void) {     

    int value,remainder;          
    
    scanf("%d", &value);          
    
    remainder = value % 2;          
    
    if (remainder == 0) printf("E");          
    
    if (remainder == 1) printf("O");          
    
    printf("\n");          
    
    return 0; 
}