#include <stdio.h>
int squrt(int n ){
    printf("\n %d \n ",sizeof(int));
    printf("%d \n ",sizeof(n));
    return n*n;
}
int main (){
    int x=10;
    int value = squrt(x);
    printf("%d",value);
    return 0;
}