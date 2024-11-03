#include <stdio.h>
int main () {
    int a = 1, b, yig = 0;
    printf("sonni kiritng: ");
    scanf("%d", &b);
    while (a <= b)
    {
        if (a % 7 == 0){
                yig = yig + a;
                printf("%d ", a);   
        }
        a = a + 1;
    }
        printf("\nyigindi %d ", yig);

    return 0;
    
}