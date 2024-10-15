#include<stdio.h>

int main() {
    int n, i;

    printf("Enter the number: ");
    scanf("%d", &n);
    int ara[n]; 
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    int evenCount = 0, oddCount = 0;
    
    for(i = 0; i < n; i++) {
        if(ara[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Print the results
    printf("The number of even numbers = %d\n", evenCount);
    printf("The number of odd numbers = %d\n", oddCount);

    return 0;
}
