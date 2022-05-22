#define _CRT_SECURE_NO_WARNINGS

// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    double n1, n2;
    int ret_val = printf;

    char answer = 'y';

    while (answer == 'Y' || answer == 'y')
    {
        printf("Enter an operator (+, -, *, /): ");
        ret_val = scanf("%c", &operation);
        printf("Enter two operands: ");
        ret_val = scanf("%lf %lf", &n2, &n1);

        switch (operation)
        {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
            break;

        case '/':
            if (n2 == 0) {
                printf("0 dan buyuk bir deger seciniz!!!");
                break;
            }

            printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
            break;

            // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
        }

        ret_val = getchar();
        printf("\n\nDo you want to continue? (Yy/Nn): \n");
        ret_val = scanf("%c", &answer);
        ret_val = getchar();
    };

    return 0;
}
