#include <stdio.h>

int main(){
    int i=1;
    while(i<=100){
        if(!(i&1))
        printf("%d,",i);
        i++;
    }
    return 0;
}