# include <stdio.h>

int main () {

printf ("PLease enter your : \n");
int age;
char name [100];
char phoneNUmber[100];

printf ("Phone number: ");
scanf ("%s",phoneNUmber);
printf ("Name: ");
scanf (" %[^\n]s",name);

printf ("age: ");
scanf ("%d",&age);
printf ("your phonr number is : %s \n your name is : %s \n your age is : %d \n thank you ", phoneNUmber, name , age);


}
