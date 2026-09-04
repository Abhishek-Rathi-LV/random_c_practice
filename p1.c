#include <stdio.h>

int main() {
    int i = 1;
    int x = 0;
    
    printf("Enter any number: ");
    fflush(stdout); // FORCE Windows to show the text immediately
    
    // Read the input safely
    if (scanf("%d", &x) == 1) {
        while (i <= x) {
            printf("%d\n", i);
            i = i + 1;
        }
    } else {
        printf("Invalid number entered.\n");
    }
    
    return 0;
}
