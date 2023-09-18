#include <stdio.h>

int main () {

double score;
printf ("enter your score : ");
scanf ("%lf",&score);


if (score<10) printf ("recalé");
else if (score <= 0 && score >= 10 && score < 12) printf ("passable");
else if (score >=12 && score < 14) printf ("assez bien");
else if (score >=14 && score < 16) printf ("bien");
else if (score >=16 && score <= 20) printf ("bien");
else printf ("invalide choice");




}
