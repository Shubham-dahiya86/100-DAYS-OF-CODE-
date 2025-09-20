#include <stdio.h>
int main() 
{
    int num1, num2;
    float sum, diff, product, division;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    division = num1/num2;
    printf("Sum = %.0f\n", sum);
    printf("Diff = %.0f\n", diff);
    printf("Product = %.0f\n", product);
    printf("Division = %.0f\n", division);
    return 0;
}