#include <stdio.h>

int main() {
   
    int n, j;
    printf("Enter n: ");
    scanf("%d",&n);
    

    for(int i = 0; i < n; i++)
    {
        for(j = 0; j < n-1-i; j++)
            printf(" ");
        
        for(j = 0; j < i + 1; j++)
            printf("#");

        // 2 spaces in the middle
        printf("  ");

        printf("\n");
    }
}

