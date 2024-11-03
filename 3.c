#include <stdio.h>
int main () {
    int a = 1, n;
    printf("sonni kiriting: ");
    scanf ("%d", &n);
    while (a <= n)
    {
        if (a % 8 == 0){
            if(a % 2 == 0)
            printf("%d ", a);
        }
        a = a + 1;

        
    }
    return 0;
    
}