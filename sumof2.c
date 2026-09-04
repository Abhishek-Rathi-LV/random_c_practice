#include <stdio.h>
int add(int a , int b ){
    return a+b;
}
int main(){
int x;
int y;
printf("Enter the first Number = ");
scanf("%d",&x);
printf("Enter the Second Number = ");
scanf("%d",&y);
int c= add(x,y);
printf("The sum of %d and %d is %d",x,y,c);
return 0;

}