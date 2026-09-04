#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the Age of ram :");
    scanf("%d",&a);
    printf("\n Enter the age  Shyam:");
    scanf("%d",&b);
    printf("\n Enter the age  of Ajay:");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("\n ram is the youngest one ");
    }
    if(b<a && b<c){
        printf("\n Shyam is youngest one  ");
    }
    if(c<a && c<b){
        printf("\n Ajay is the youngest one  ");
    }
    

    return 0;
}