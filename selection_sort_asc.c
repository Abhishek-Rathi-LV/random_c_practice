#include <stdio.h>

int main(void)
{
    int n,i,j,temp,c,mini=0;
    printf("Enter the Number of elements u want in array :");
    scanf("%d", &n);
    int arr[n];
    printf("\n"); 
    for (int c = 0; c < n; c++)
    {
        printf("Enter the data for location %d  of array :", c);
        scanf("%d", &arr[c]);
    }          
    printf("\n");
    printf("The unsorted array is :");  
    for (int c = 0; c < n; c++)
    {
        printf("  %d  ", arr[c]);
    }
    for(i=0;i<n-1;i++){
        mini=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(mini!=i){
            temp=arr[i];
            arr[i]=arr[mini];
            arr[mini]=temp;
            temp=0;
        }
        
    }
    printf("\n the sorted array is :");
    for(i=0;i<n;i++){
        printf( " %d  ",arr[i]);
    }
    return 0;
}