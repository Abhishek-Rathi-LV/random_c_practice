#include <stdio.h>
int main(){
    int arr[5]={10,20,25,36,42};
    int i=0;
    int choice;
    printf( "Enter the number you want to search :");
    scanf("%d",&choice);
    printf("\n");
    for(i=0;i<5;i++){
        if(arr[i]==choice){
        printf("The element %d found at %d",choice,i);
        break;}

    }
    if(i==5){
        printf("Elemnt not in the array");
    }
    return  0;
}