#include <stdio.h>

int main(){
    int n,i;
    printf("Enter limit: ");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("%d,",i);
        i++;
    }
    return 0;
}