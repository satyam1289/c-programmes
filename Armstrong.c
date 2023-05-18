#include <stdio.h>
#include <math.h>

int main(){
    int n,c=0,t;
    printf("Enter a number: ");
    scanf("%d",&n);

    t=n;
    while(n!=0){
        c++;
        n/=10;
    }
    t=n;
    int s=0;
    while(n!=0){
        s+=(int)pow(n%10,c);
        n/=10;
    }
    if(t==s)
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");
}