#include <stdio.h>

int main() {
	int x1,x2,x3,y1,y2,y3,m1,m2;
	printf("Enter the X1 Y1 :");
	scanf("%d %d",&x1 ,&y1);
	printf("\nEnter the x2 Y2 :");
	scanf("%d %d",&x2 ,&y2);
	printf("\nEnter the X3 Y3 :");
	scanf("%d %d",&x3 ,&y3);
	m1=(y2-y1)/(x2-x1);
	m2=(y3-y2)/(x3-x2);
	if(m1==m2){
	    printf("All the Given Points Fall on a straight line ");
	}
	else{
	    printf("All the Given Points do not fall on a straight line");
	}
	return 0;
}
