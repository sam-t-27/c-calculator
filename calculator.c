#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    printf("===== SIMPLE C CALCULATOR =====\n");

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid number!\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid number!\n");
        return 1;
    }

    switch (op) {
        case '+':
            printf("Result = %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero!\n");
            } else {
                printf("Result = %.2f\n", num1 / num2);
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
