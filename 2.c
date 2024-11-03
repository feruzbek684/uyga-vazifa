#include <stdio.h>
int main () {
    int a = 1, n;
    printf("sonni kiriting: "); 
    scanf("%d", &n);
    while (a <= n)
    {
        if (n % 2 == 0)
        {
            printf("%d ", n);
        }
        n --;

    }

    return 0;
    
}