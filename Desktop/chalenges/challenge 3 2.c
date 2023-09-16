#include <stdio.h>

int main () {
    unsigned int N,N1;


    printf ("welcome !\n");
    printf ("enter your first number : \n ");
     scanf ("%d",&N);
    printf ("enter your seconde number : \n ");
    scanf ("%d",&N1);

    if (N!=N1) printf ("the result is : \n%d",N+N1);
    else printf ("the result is : \n %d", (N+N1)*3);



}
