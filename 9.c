#include <stdio.h>
int main(){
	int a, b;
	printf("SONNI KIRITING:   \n");
	scanf("%d%d", &a, &b);
	printf("sonlar: \n");
	while (a<=b){
		if(a%7!=0 && a%3!=0 && a%5!=0){
			printf("%d\n", a);
            a++;
		}
        else {
            printf("%d ",a);
            continue;
        }
		a=a+1;
	}
	
	
	
	
	return 0;
}
