#include <stdio.h>

int main () {

double number;
printf ("Enter your number : \n");
scanf ("%lf",&number);
if  (number<0) printf ("this number IS negatif\n");
else if  (number>0)printf ("this number IS positive\n");
else printf ("this number is null");


}
