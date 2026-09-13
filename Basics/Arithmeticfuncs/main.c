#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);

    // Check if the second number is zero before dividing
    if (num2 != 0) {
        // Fix: Save the result into a float variable first to satisfy strict compilers
        float result = (float)num1 / num2;
        printf("Division: %.2f\n", result);
    }
    else {
        printf("Division: Undefined (Cannot divide by zero!)\n");
    }

    return 0;
}
