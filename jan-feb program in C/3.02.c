#include <stdio.h>
int main() {
    int v1, v2, result;
    printf("Enter first value: ");
    scanf("%d", &v1);
    printf("Enter second value: ");
    scanf("%d", &v2);
    result = v1 - v2;
    printf("Subtraction of v1 and v2 is: %d", result);
    return 0;
}