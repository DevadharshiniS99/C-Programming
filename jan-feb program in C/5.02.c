#include <stdio.h>
int main() {
    float v1,v2, result;
    printf("Enter first value: ");
    scanf("%f", &v1);
    printf("Enter second value: ");
    scanf("%f", &v2);
        result = v1 / v2;
        printf("Division =%.2f",result);
    return 0;
}