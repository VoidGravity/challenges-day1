#include <stdio.h>
//THIS CODE CAN4T HAND NEGATIVE NUMBERS YET



double mysqrt (double number) {
    double initguess=1;
    double guss=1;
    double diff;




 while (1) {

    guss = 0.5 * (initguess + number /initguess);
    diff = initguess - guss;




    if (diff <0) diff =-diff;
    else if (diff< 0.0001) return initguess;

    guss = initguess;


 }



}

int main () {
    double a,b,c,delta,result,x1,x2,result1;
    int proceed;
    char choice;

    printf ("the formula is as follow ax^2+bx+c PLease enter the value of a : \n");
    scanf (" %lf",&a);

    if (a==0) {
        printf ("a can't be 0 , please enter a diferent value : \n");
        scanf ("%lf",&a);



    }
    printf ("Please enter the value of b : \n");
    scanf (" %lf",&b);
    printf ("PLease enter the value of c : \n");
    scanf (" %lf",&c);
    delta = 1;


    delta = (b*b )- (4*a*c);

    if (delta<0) {
        delta= -delta;

        printf ("the equation doesn't have a solution in the set of real number , but it might have a solution in the set of imaginary number , would you like ot continue (Y/N) : \n");
        scanf (" %c",&choice);
        switch (choice) {
        case 'y': proceed = 1; break;
        case 'n': proceed = 0 ;break;
        case 'Y': proceed =1;break;
        case 'N': proceed = 0;break;
        default : printf("YOUR CHOICE IS NOT VALID ! \n"); break;

        }
            if (proceed){

            printf ("the equations accepts TWO complex solutions Z1 and Z2, Pay premuim to view result");

        }

    }
    else if (delta >0) {

        printf ("the equations accepts to solutions x1= %f , and x2= %f \n",(-b-mysqrt(delta))/2*a,(-b+mysqrt(delta))/2*a);
    }
    else printf ("the solution to the equation is : %.2f ", -b/2*a);







}
