# include <stdio.h>

int main () {

int f;
int c;


printf ("Please enter the tempreture in Fahrenheit  : \n");
scanf (" %d",&f);

printf("the tempreture is : %d c \n",c=(f-32)/1.8);

if (c<5){printf("the tempreture is cold");}
else if (c<39){printf("the tempreture is hot");}
else {printf("the tempreture is normal");}

}

