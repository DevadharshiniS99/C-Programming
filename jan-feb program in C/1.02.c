#include <stdio.h>
int main() {
    int v1, v2, sum;
    printf("Enter first value: ");
    scanf("%d", &v1);
    printf("Enter the second value: ");
    scanf("%d", &v2);
    sum = v1 + v2;
    printf("The sum of v1 and v2 is: %d\n", sum);
    return 0;
}