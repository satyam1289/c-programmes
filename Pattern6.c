#include <stdio.h>

int main(){
    char ch='E';
    for(char i='F';i>='A';i--)
    {
        for(char j='A';j<=i;j++)
        printf("%",j);
        for(char j='E';j>=i;j--)
        printf(" ");
        for(char j='E';j>='A';j--)
        printf("%c",j);
        printf("\n");
    }
}