# include <stdio.h>

int main () {
float a[4],sresult,sq;
for (int i = 0; i<4; i++) {

        printf ("Please enter your number : ");
        scanf ("%f",&a[i]);


    }
    sresult = a[0]+a[1]+a[2]+a[3];
    printf("the some of all the four numbers is : %.2f \nthe average is : %.2f\n",sresult, sq=sresult/4);
}
