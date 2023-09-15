# include <stdio.h>
#include <math.h>
int main () {
int number,number1,number2,number3,number4;
printf ("enter your number : \n");
scanf ("%d",&number);
number1 = number%10;
number /=10;
number2 = number%10;
number /=10;
number3 = number%10;
printf ("THE INVERSE IS  : %d\n",number4=number1*100+number2*10+number3);


}
