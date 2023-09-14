// Online C compiler to run C program online
#include <stdio.h>
/*
for (int n =0; i <=size; n++) {
    int subtotal;
    if (op[i]='(' || ')' ) {
        if op[i]='(' {
            subtotal = (+numbers[0])
        }

    }
    if (op[i]='-' || '+' ||'*' || '/') {



    }

}

*/


int main() {
    int size;
    int incr = 0;
    int numbers [20];
    char op [20];
    int p [20];
    int totalP[20];
    printf ("welcome!\n");
    printf ("how many operations you are looking to performe ?\n");
    scanf ("%d",&size);
    for (int i=0;i<=size;i++){
        printf ("enter a number (zero for no number) : \n");

        scanf ("%d",&numbers[i]);
        printf ("If you want double parenthesies type (p) if not type (N) : \n");
        scanf (" %c",&p[i]);
        if (p[i]=='P') {
            printf ("enter the number you want inside the parentheses");
            i++;
            scanf("%d",&numbers[i]) ;
            printf ("enter an operator: \n");
            scanf ("%s",&op[i]);
            printf ("enter the 2nd number you want inside the parenthesis");
            scanf("%d",&numbers[i+1]) ;
            if (op[i]=='+') {
            totalP[incr] =numbers[i+1]+numbers[i+2] ;
            printf("%d",totalP[incr]);
            incr++;
            }


        }




    }



}


