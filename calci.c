#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float num, result;

    printf("Scientific Calculator\n");
    printf("--------------------\n");
    printf("1. Square root\n");
    printf("2. Exponential\n");
    printf("3. Logarithm\n");
    printf("4. Sine\n");
    printf("5. Cosine\n");
    printf("6. Tangent\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%f", &num);
            result = sqrt(num);
            printf("Square root of %.2f = %.2f\n", num, result);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%f", &num);
            result = exp(num);
            printf("Exponential of %.2f = %.2f\n", num, result);
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%f", &num);
            result = log(num);
            printf("Logarithm of %.2f = %.2f\n", num, result);
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%f", &num);
            result = sin(num);
            printf("Sine of %.2f = %.2f\n", num, result);
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%f", &num);
            result = cos(num);
            printf("Cosine of %.2f = %.2f\n", num, result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%f", &num);
            result = tan(num);
            printf("Tangent of %.2f = %.2f\n", num, result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
