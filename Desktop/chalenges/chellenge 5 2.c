#include <stdio.h>

int main () {

double input,output;
char tinput1,tinput2;
int choice;
printf ("do you want to convert to days and months and years, Minutes and secondes or you only want to pick one ? (1-Pick one/2-ALL)  ");
scanf ("%d",&choice);
printf ("what do you want to convert ? only enter first leter (days/months/years/Minutes/secondes) : \n");
scanf (" %c",&tinput1);
if (choice) {

    printf ("you want to convert %s to : only enter first leter (days/months/years/Minutes/secondes) ?",tinput1);
scanf (" %c",&tinput2);
printf (" how many %s you want to convert to %s",tinput1,tinput2);
scanf ("%f",&input);

} else printf (" how many %s you want to convert to all the other time periods",tinput1);
scanf ("%f",&input);

/*switch (tinput1) {
    case 'd' :
        switch (tinput2) {
            case 'd' : printf ("%.2f days are %.2f days",input,input); if (choice) break;
            case 'm' : printf ("%.2f days are %.2f month",input,input/30);if (choice) break;
            case 'y' : printf ("%.2f days are %.2f years",input,input/365.25);if (choice) break;
            case 'M' : printf ("%.2f days are %.2f minutes",input,input*(24*60));if (choice) break;
            case 's' : printf ("%.2f days are %.2f SECONDES ",input,input*(24*60*60)); break;


            }
    case 'M' :
        switch (tinput2) {
            case 'd' : printf ("%.2f Minutes are %.2f days",input,input); if (choice == "Pick one" || choice == "pick one") break;
            case 'm' : printf ("%.2f Minutes are %.2f month",input,input/(30*24*60));if (choice == "Pick one" || "pick one") break;
            case 'y' : printf ("%.2f Minutes are %.2f years",input,input/(365*24*60));if (choice == "Pick one" || "pick one") break;
            case 'M' : printf ("%.2f Minutes are %.2f minutes",input,input);if (choice == "Pick one" || "pick one") break;
            case 's' : printf ("%.2f Minutes are %.2f SECONDES ",input,input*60); break;
            }
  /*  case 'y' :
        switch (tinput2) {
            case 'd' :
            case 'm' :
            case 'y' :
            case 'M' :
            case 's' :break;


            }

    case 'm' :
        switch (tinput2) {
            case 'd' :
            case 'm' :
            case 'y' :
            case 'M' :
            case 's' :break;


            }
    case 's' :
        switch (tinput2) {
            case 'd' :
            case 'm' :
            case 'y' :
            case 'M' :
            case 's' :break;

            } */



//}


}
