#include <stdio.h>

struct {
    int id;
} products;

int main(void) 
{
    printf("%d", products.id);
    return 0;
}
