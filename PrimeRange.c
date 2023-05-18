#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int i=2;
    while(num>=1){
        if(num%i==0)
        { printf("%d,",i);
        num/=i;}
        else
        i++;
        
    }
    return 0;
}