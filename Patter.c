#include <stdio.h>

int main(){
    
    for(int i=1;i<=5;i++)
    {
        
        for(int j=5;j>=i;j--){

        
        printf("%d",6-j);
        }
        for(int j=2;j<=i;j++){
            if(!(i<2))
            printf("  ");
        }
        for(int j=5;j>=i;j--)
        printf("%d",6-j);
        printf("\n");
    }
   for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++)
        printf("%d",j);
        for(int j=4;j>=i;j--){
            if(i<5)
            printf("  ");
        
        }
        for(int j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");

   }
    
    return 0;
}