#include <stdio.h>


int main () {
char input;
printf ("please enter your character : ");

scanf (" %c",&input);

if (input>64 && input< 91) printf ("this character is part of the alphabet, it's a capitale letter");
else if (input>96 && input< 123) printf ("this character is part of the alphabet, it's not a capitale letter");
else printf ("this characte is not part of the alphabet");




}
