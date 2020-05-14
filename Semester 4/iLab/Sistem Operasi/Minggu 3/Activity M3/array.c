// Average of array's elements

#include <stdio.h>

int main() {
    int num[100], n;
    int sum = 0;
    printf("Enter number of elements: "); 
    scanf("%d", &n);
    printf("\nInput numbers :\n");
    for(int i=0; i<n; ++i) {
        printf("Number %d: ", i+1);
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("\nAverage = %d", sum/n);
    
    return 0;
}
