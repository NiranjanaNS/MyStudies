#include <stdio.h>
int main() {
    double a, b;
    char op;
    printf("Enter an operator: ");
    scanf("%c", &op);
    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    switch (op) {
    case '+':
        printf("%.0lf + %.0lf = %.0lf", a, b, a + b);
        break;
    case '-':
        printf("%.0lf - %.0lf = %.0lf", a, b, a - b);
        break;
    case '*':
        printf("%.0lf * %.0lf = %.0lf", a, b, a * b);
        break;
    case '/':
        printf("%.0lf / %.0lf = %.0lf", a, b, a / b);
        break;
    default:
        printf("Invalid Input");
        break;
    }
  }