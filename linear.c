#include <stdio.h>
int sum(int a[],int n){
    printf("%d Bytes\n",sizeof(a)*n);
     printf("%d Bytes\n",sizeof(int));
      printf("%d Bytes\n",sizeof(n));
       
    int s =0;
    int i;
    for( i =0 ; i<n;i++){
       s=s+a[i];
    }
    return s;
}
int main (){
    int n;
    printf("Enter array Size  :  ");
    scanf("%d ",&n);
    int arr[n];
    for(int i =0 ; i<n;i++){
        printf("\nEnter the data for %d index :",i);
        scanf("%d \n",&arr[i]);

    }
    int value=sum(arr,n);
    printf("The Sum of the given array is = %d",value);
    return 0;
}
