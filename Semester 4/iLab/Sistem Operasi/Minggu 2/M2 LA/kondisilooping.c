#include <stdio.h>
int main() {
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Odd numbers : ");
    for(count = 1; count <= num; ++count) {
        if (count%2!=0){
	    printf("%d ", count);
            sum += count;
	}
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
