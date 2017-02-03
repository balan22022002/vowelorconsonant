#include <stdio.h>
#include <stdlib.h>
int main ()
{
char n;
printf("\n Enter the alphabet ");
scanf("%c",&n);
if((n=='a')||(n=='e')||(n=='i')||(n=='o')||(n=='u'))
printf("\n The letter is a vowel.");
else
printf("\n The letter is a consonant.");
return 0;
}   