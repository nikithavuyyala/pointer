#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int i,j, r = 3, c = 4;
 
    int* ptr = malloc((r * c) * sizeof(int));
 
    
    for ( i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", ptr[i * c + j]);
        printf("\n");
    }
 
    free(ptr);
 
    return 0;
}
