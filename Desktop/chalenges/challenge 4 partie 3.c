#include <stdio.h>

int main () {

int max=0;
int previous;
int number;
int result=0;
int i = 1 ;


while (1) {
    printf ("enter your %d number : ",i);
    scanf ("%d",&number);
    if (number < 0 || number > 100) {printf ("the number %d will be skipped ",number); continue;}

    if (number > previous ) max = number;

    if (number==0) break;
    previous = number;

    result = result + number ;

    i++;
}
printf ("%d is the largest number you've entered so far\n",max);
printf ("%d is the result ",result);


}
