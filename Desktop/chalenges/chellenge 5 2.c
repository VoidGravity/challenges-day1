#include <stdio.h>

int main() {
    double input, output;
    char tinput1, tinput2;
    printf("What do you want to convert? Only enter the first letter (d/m/y/M/s): ");
    scanf(" %c", &tinput1);
        printf("You want to convert %c to: Only enter the first letter (d/m/y/M/s): ", tinput1);
        scanf(" %c", &tinput2);
        printf("How many %c do you want to convert to %c: ", tinput1, tinput2);
        scanf("%lf", &input);
    switch (tinput1) {
        case 'd':
            switch (tinput2) {
                case 'd': printf("%.2lf days are %.2lf days", input, input); break;
                case 'm': printf("%.2lf days are %.2lf months", input, input / 30); break;
                case 'y': printf("%.2lf days are %.2lf years", input, input / 365.25); break;
                case 'M': printf("%.2lf days are %.2lf minutes", input, input * (24 * 60)); break;
                case 's': printf("%.2lf days are %.2lf SECONDS", input, input * (24 * 60 * 60)); break;
                default: printf("Invalid conversion choice");
            }
            break;

        case 'M':
            switch (tinput2) {
                case 'd': printf("%.2lf Minutes are %.2lf days", input, input / (24 * 60)); break;
                case 'm': printf("%.2lf Minutes are %.2lf months", input, input / (30 * 24 * 60)); break;
                case 'y': printf("%.2lf Minutes are %.2lf years", input, input / (365 * 24 * 60)); break;
                case 'M': printf("%.2lf Minutes are %.2lf minutes", input, input); break;
                case 's': printf("%.2lf Minutes are %.2lf SECONDS", input, input * 60); break;
                default: printf("Invalid conversion choice");
            }
            break;

        case 'y':
             switch (tinput2) {
                case 'd': printf("%.2lf Minutes are %.2lf days", input, input / (24 * 60)); break;
                case 'm': printf("%.2lf Minutes are %.2lf months", input, input / (30 * 24 * 60)); break;
                case 'y': printf("%.2lf Minutes are %.2lf years", input, input / (365 * 24 * 60)); break;
                case 'M': printf("%.2lf Minutes are %.2lf minutes", input, input); break;
                case 's': printf("%.2lf Minutes are %.2lf SECONDS", input, input * 60); break;
                default: printf("Invalid conversion choice");
        case 'm':
             switch (tinput2) {
                case 'd': printf("%.2lf months are %.2lf days", input, input / (24 * 60)); break;
                case 'm': printf("%.2lf months are %.2lf months", input, input / (30 * 24 * 60)); break;
                case 'y': printf("%.2lf months are %.2lf years", input, input / (365 * 24 * 60)); break;
                case 'M': printf("%.2lf months are %.2lf minutes", input, input); break;
                case 's': printf("%.2lf months are %.2lf SECONDS", input, input * 60); break;
                default: printf("Invalid conversion choice");
        case 's':
             switch (tinput2) {
                case 'd': printf("%.2lf r are %.2lf days", input, input / (24 * 60)); break;
                case 'm': printf("%.2lf r are %.2lf months", input, input / (30 * 24 * 60)); break;
                case 'y': printf("%.2lf monrths are %.2lf years", input, input / (365 * 24 * 60)); break;
                case 'M': printf("%.2lf r are %.2lf minutes", input, input); break;
                case 's': printf("%.2lf s are %.2lf SECONDS", input, input * 60); break;
                default: printf("Invalid conversion choice");

        default: printf("Invalid input choice");
    }

    return 0;
}
