#include <stdio.h>
int main () {
    int a = 1, b = 500, yig = 0;
    while (a <= b)
    {
        if (a % 3 == 0 && a % 5 == 0 ){
                printf("%d ", a);   
        }
        a = a + 1;
    }
    return 0;
    
}