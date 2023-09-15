# include <stdio.h>
//math.H library owes me money

double myosqrt(double number) {
    double aprox=1;
    double aproxinit;
    aproxinit = 2.0;


    while (1) {
        aprox = 0.5 * (aproxinit + number / aproxinit);
        double diff = aprox -aproxinit;
        if (diff <0 ) {diff = -diff ;}
        if ( diff< 0.001) {
            return aprox;
        }
        aproxinit = aprox;
    }
}



int main () {
    int X1,X2,Y1,Y2,r;
    int resultPoint;
printf ("WELCOME !\n this project will allow you to calculate the distance betwen to points M and N!\n");
printf ("Please enter the x1 cordinate of the first point M : \n");
scanf ("%d",&X1);
printf ("Please enter the x2 cordinate of the SECOND point M: \n");
scanf ("%d",&X2);
printf ("Please enter the Y2 cordinate of the first point N: \n");
scanf ("%d",&Y1);
printf ("Please enter the x cordinate of the SECOND point N: \n");
scanf ("%d",&Y2);
resultPoint= ((X2*X2)-(2*X2*X1)+(X1*X1))+((Y2*Y2)-(2*Y2*Y1)+(Y1*Y1));
printf ("\n%f",myosqrt (resultPoint));




}
