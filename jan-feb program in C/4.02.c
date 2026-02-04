#include <stdio.h>
int main() {
    int v1, v2, multiplication;
    printf("Enter first value: ");
    scanf("%d", &v1);
    printf("Enter second value: ");
    scanf("%d", &v2);
    multiplication = v1 * v2;
    printf("The multiplication of v1 and v2 is: %d", multiplication);
    return 0;
}