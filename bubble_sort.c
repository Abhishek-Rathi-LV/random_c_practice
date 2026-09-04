#include <stdio.h>
int main(){
    int n;
    int i;
    int temp;
    printf("Enter the Number of elements u want in array :");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    for(int c=0;c<n;c++){
     printf("Enter the data for location %d  of array :",c);
     scanf("%d",&arr[c]);
    }
    printf("\n");
    printf("The unsorted array is :");
    for(int c =0;c<n;c++){
        printf("  %d  ",arr[c]);
    }
    for(i=0;i<n-1;i++){ 
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf("\n");
    printf("The Bubble sorted array is :");
    for(int c =0;c<n;c++){
        printf("  %d  ",arr[c]);
    }
    return 0;
}