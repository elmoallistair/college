// Display value and address of pointer

#include <stdio.h>
int main() {
    int *p;
    int var;
    printf("Input var: "); scanf("%d", &var);
    p = &var; 
    
    printf("\nValue of variable var is: %d", var);
    printf("\nValue of variable var is: %d", *p);
    printf("\nAddress of variable var is: %p", &var);
    printf("\nAddress of pointer p is: %p", &p);
    
    return 0;
}
