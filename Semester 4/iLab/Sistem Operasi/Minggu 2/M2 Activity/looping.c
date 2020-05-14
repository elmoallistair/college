#include <stdio.h>
int main() {
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count) {
        printf("%d ", count);
        sum += count;
    }

    printf("\nSum = %d", sum);

    return 0;
}
