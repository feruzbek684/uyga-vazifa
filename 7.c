#include <stdio.h>
int main () {
    int a, b = 0;
    float son, d=0, e=0;
    printf("sonni kiriting: ");
    scanf("%d", &a);
    while (b < a )
    {
        printf("sonni kiritng:");
        scanf("%f", &son);
        d = d + son;
        e = d / a;
    }
    b++;

    printf("orta arifmetigi %.2f\n", e);
    


}