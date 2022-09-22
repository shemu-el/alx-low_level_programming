#include "main.h"
#include <stdio.h>
#include <string.h>

int main()
{
   char strings[] = "Doing";
   char concate[] = "Hard Things";
   char *ptr;

   printf("%s\n",strings);
   printf("%s",concate);
   ptr = _strcat(strings, concate);
   printf("%s",strings);
   printf("%s",concate);
   printf("%s",ptr);

  \* printf("Two Strings Concatenation ", strcat(strings,concate));
*/
   return (0);

}
