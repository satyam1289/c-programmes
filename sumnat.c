#include <stdio.h>

int main(){
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    int s=0;
    for(int i=0;i<=n;i++){
        s=s+i;
    }
    printf("Sum of all natural Numbers are is %d",s);
    return 0;
}