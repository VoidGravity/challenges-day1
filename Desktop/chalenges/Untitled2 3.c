    #include <stdio.h>

    int main () {
    int number;
    int choice;
    printf ("Please enter your number : \n");
    scanf ("%d",&number);
    for (int i = 1; i <number ; i++) {
        choice=number%i;
        if (i==1) continue;

        if (choice == 0){printf ("this number is NOT premier"); break;}
        else if (i==number-1) {printf ("this number is premier");}
        }

    }

