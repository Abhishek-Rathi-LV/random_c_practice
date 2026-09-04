#include <stdio.h>
void merge(int arr[],int lb,int mid,int ub);

void MergeSort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
       MergeSort( arr, lb,mid);
       MergeSort( arr,mid+1, ub);
       merge(arr,lb,mid,ub);
    }

}
void merge(int arr[],int lb,int mid,int ub){
int i=lb;
int j= mid+1;
int k= lb;
int b[ub+1];
while( i<=mid && j<=ub){
    if(arr[i]<arr[j]){
        b[k]=arr[i];
        k++;
        i++;
    }
    else {
        b[k]=arr[j];
        k++;
        j++;
    }

}
if(i>mid){
    while(j<=ub){
        b[k]=arr[j];
        k++;
     j++;
    }
  
}
else{
    while(i<=mid){
    b[k]=arr[i];
    k++;
    i++; 
    }
}
for(k=lb;k<=ub;k++){
    arr[k]=b[k];
}
}
int main(void)
{
    int n,c;
    printf("Enter the Number of elements u want in array :");
    scanf("%d", &n);
    int ub=n-1;
    int lb=0;
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
     MergeSort( arr, lb,ub); 
    printf("\n the sorted array is :");
    for(int i=0;i<n;i++){
        printf( " %d  ",arr[i]);
    }
    return 0;
}