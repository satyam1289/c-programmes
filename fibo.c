#include <stdio.h>

int main(){
    int n,a,b;
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d,%d,",a,b);
    for(int i=3;i<=n;i++)
    {
        int c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
    return 0;
}