#include <stdio.h>
int main(){
    int k=2,n,m,s=0;
    printf("Sonni kiriting:",n);
    scanf("%d",&n);;
    while(n>=k){
        if(n%2==1){
            n--; 
            continue;
        }else{
            printf("%d ",n);
            s=s+k;
        }
        n --;
    }

    return 0;

}