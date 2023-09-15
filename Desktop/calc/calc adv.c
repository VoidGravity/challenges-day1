#include <stdio.h>

int main() {
    int size;
    int numbers[20];
    char op[20];
    int p[20];
    int totalP[20];
    int result = 0;

    printf("Welcome!\n");
    printf("How many operations do you want to perform? ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter a number (zero for no number): ");
        scanf("%d", &numbers[i]);

        printf("If you want double parentheses, type 'P'; if not, type 'N': ");
        scanf(" %c", &p[i]);

        if (p[i] == 'P') {
            printf("Enter the first number inside the parentheses: ");
            scanf("%d", &numbers[i + 1]);

            printf("Enter an operator (+, -, *, /): ");
            scanf(" %c", &op[i]);

            printf("Enter the second number inside the parentheses: ");
            scanf("%d", &numbers[i + 2]);

            if (op[i] == '+') {
                totalP[i] = numbers[i + 1] + numbers[i + 2];
            } else if (op[i] == '-') {
                totalP[i] = numbers[i + 1] - numbers[i + 2];
            } else if (op[i] == '*') {
                totalP[i] = numbers[i + 1] * numbers[i + 2];
            } else if (op[i] == '/') {
                if (numbers[i + 2] != 0) {
                    totalP[i] = numbers[i + 1] / numbers[i + 2];
                } else {
                    printf("Division by zero is not allowed!\n");
                    return 1; // Exit with an error code
                }
            } else {
                printf("Invalid operator entered!\n");
                return 1; // Exit with an error code
            }

            result += totalP[i];

            printf("Result inside parentheses: %d\n", totalP[i]);
        } else if (p[i] == 'N') {
            result += numbers[i];
        } else {
            printf("Invalid parentheses option entered!\n");
            return 1; // Exit with an error code
        }
    }

    printf("Final result: %d\n", result);

    return 0;
}
