#include <stdio.h>
int main () {
    int a = 0, son, juft = 0;
    while (a < 5)
    {
        printf("son: ");
        scanf("%d", &son);

        if (son % 2 == 0)
        {
            juft ++;
        }
        a ++;    
    }
    printf(" juftlar %d\n", juft);


    return 0;
     
    
    
}