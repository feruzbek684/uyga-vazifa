#include <stdio.h>
int main () {
    int a, b, c;
    printf("sonni kiritng: ");
    scanf("%d", &a);
    printf("sonni kiritng: ");
    scanf("%d", &b);
    c = a;
    while (c <= b)
    {
    printf("%d %d\n", c, c * c);
    c++;
    }    

    return 0;
}