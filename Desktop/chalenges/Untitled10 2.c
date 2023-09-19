#include <stdio.h>


int main () {

char input [50];
printf ("enter any date as follows : 15/09/2012 : \n");
scanf("%s",input);

printf ("%c %c",input[0],input[1]);

if (input [4]=='0'){
    switch (input [5]) {
        case '1' : printf ("-January"); break;
        case '2' : printf ("-February"); break;
        case '3' : printf ("-March");break;
        case '4' : printf ("-April");break;
        case '5' : printf ("-May");break;
        case '6' : printf ("-June");break;
        case '7' : printf ("-July");break;
        case '8' : printf ("-August");break;
        case '9' : printf ("-September");break;

        }
if (input [4]=='1') {
    switch (input [5]) {
    case '0' : printf ("-October");break;
    case '1' : printf ("-November"); break;
    case '2' : printf ("-December");break;


    }



}



}
printf ("%s %s %s %s",input[7],input[8]);






}
