#include <stdio.h>

int main () {
int max;
int prev= 1;
int result;
int number;
int i = 1;
while (1) {
    printf ("Enter your %d number : ",i);
    scanf ("%d",&number);
    if (number > prev) number = max;
    if (number< 0 && number > 101) {
        continue;
    }
    result = result + number;
    prev = number;
    if (number>max)
        i++;



    }
}



