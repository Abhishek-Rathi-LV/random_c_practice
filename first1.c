#include <stdio.h>

int main () {
    int i = 1;
    int x;
    
    // Fixed: added \n at the end to force the text to show up immediately
    printf("Enter any number:\n"); 
    
    scanf("%d", &x);
    while (i <= x) {
        printf("\n %d", i);
        i = i + 1;
    }
    
    fflush(stdin); 
    getchar(); 
    return 0;
}
