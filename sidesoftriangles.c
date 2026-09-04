#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the 1st side:");
    scanf("%d",&a);
    printf("\n Enter the 2nd side:");
    scanf("%d",&b);
    printf("\n Enter the 3rd side:");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("\n The given Side can make a triangle ");
    }
    else{
        printf("The Given sides cant make a triangle ");}
    

    return 0;
}