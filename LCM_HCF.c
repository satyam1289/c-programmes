#include <stdio.h>

int main(){
    int n,m,i,p=1;

    printf("Enter Number Whose Lcm to be Calculated: ");
    scanf("%d%d",&n,&m);
    
    if()
    i=2;
    for(int i={
        if(n%i==0 && m%i==0){
            p=p*n%i;
            n/=i;
        }
        else
        i++;
    }
    int hc=(m*n)/p;
    printf("LCM of the Number is %d\nHCF of the number is %d",p,hc);
    
    return 0;
}