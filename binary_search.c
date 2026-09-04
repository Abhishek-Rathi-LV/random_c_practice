#include <stdio.h>
int main(){
    int arr[5]={10,20,25,36,42};
    int i=0;
    int lr=0;
    int flag =0;
    int upper=4;
    int mid=(lr+upper)/2;
    int choice;
    printf( "Enter the number you want to search :");
    scanf("%d",&choice);
    while(lr<=upper){
        mid=(lr+upper)/2;
        if(arr[mid]==choice){
            flag=1;
            break;
        }
        else if(arr[mid]<choice){
            lr=mid+1;
        }
        else
            upper=mid-1;


    }
    printf("\n");
    if(flag==1)
    printf("The data found at location %d",mid);
    else
    printf("The data does not exist in the araay");
    return 0;
}
    