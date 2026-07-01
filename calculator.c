#include <stdio.h>
#include <math.h>

int main() {
    int operation;
    double num1, num2;

    do {
        printf("__________________________________\n");
        printf("Welcome To Simple Calculator\n\n");

        printf("Choose The Following Options : \n");
        printf("1: Add\n");
        printf("2: Subtract\n");
        printf("3: Multiply\n");
        printf("4: Divide\n");
        printf("5: Modulus\n");
        printf("6: Power\n");
        printf("7: Exit\n");

        printf("Now, Enter Your Choice : ");
        scanf("%d", &operation);

        if (operation >= 1 && operation <= 6) {
            printf("\nEnter Number 1 : ");
            scanf("%lf", &num1);
            printf("Enter Number 2 : ");
            scanf("%lf", &num2);
        }

        switch (operation) {
            case 1: printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2); break;
            case 2: printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2); break;
            case 3: printf("%.2f x %.2f = %.2f\n", num1, num2, num1 * num2); break;
            case 4:
                if (num2 == 0) printf("Error: Division by zero!\n");
                else printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                break;
            case 5:
                if ((int)num2 == 0) printf("Error: Modulus by zero!\n");
                else printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                break;
            case 6: printf("%.2f ^ %.2f = %.2f\n", num1, num2, pow(num1, num2)); break;
            case 7: printf("Thank you for using the calculator!\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }

    } while (operation != 7);

    return 0;
}
