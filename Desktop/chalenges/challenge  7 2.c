#include <stdio.h>

int main () {
char character;
printf ("Enter your character : ");
scanf (" %c",&character);
if (character > 64 && character < 91) printf ("this character is capitale");
else if (character <123 && character  >60 ) printf ("this character is not capitale");
else printf ("your choice is not valide");




}
