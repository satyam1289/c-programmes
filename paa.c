#include <stdio.h>

int main(){
    
    for(int i=1;i<=5;i++)
    {
        
        for(int j=5;j>=i;j--){

        if((i+j)%2==0)
        printf("1");
        else
        printf("0");
        }
        for(int j=2;j<=i;j++){
            if(!(i<2))
            printf("  ");
        }
        for(int j=5;j>=i;j--){
         if((i+j)%2==0)
        printf("1");
        else
        printf("0");}
        for(int j=1;j<=i;j++){
              if((i+j)%2==0)
        printf("1");
        else
        printf("0");
        }
        for(int j=2;j<=i;j++){
            if(!(i<2))
            printf("  ");
        }
         for(int j=1;j<=i;j++){
              if((i+j)%2==0)
        printf("1");
        else
        printf("0");
        }
      
        printf("\n");
    }
   for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
              if((i+j)%2==0)
        printf("1");
        else
        printf("0");
        }
        
        for(int j=4;j>=i;j--){
            if(i<5)
            printf("  ");
        
        }
        for(int j=1;j<=i;j++)
        {
              if((i+j)%2==0)
        printf("1");
        else
        printf("0");
        }
        printf("\n");

   }
    
    return 0;
}