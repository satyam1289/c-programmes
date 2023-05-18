#include <stdio.h>

int main(){
    int s,t ,a[5];
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<5;i++){
        if(t<a[i]){
            t=a[i];
            s=i;
        }
    }
    a[s]=0;
    t=0;
    for(int i=0;i<5;i++){
        if(t<a[i]){
            t=a[i];
    }
    }
    printf("%d",t);
    return 0;
}