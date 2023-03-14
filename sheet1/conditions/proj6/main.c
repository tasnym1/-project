#include <stdio.h>
#include <stdlib.h>

int main()
{//check vowel or consonant
   char x;
   printf("enter the character");
   scanf("  %c",&x);
   if( x=='a'|| x=='i' ||x=='o'||x=='u'||x=='e')
     printf("%c is a vowel",x);
   else
     printf("%c is a consonant",x);

    return 0;
}
