#include <stdio.h>

int main() {
   char str[100];
   int i;

   printf("Enter a string: ");
   scanf("%s", str);

   i = 0;
   while (str[i] != '\0') {
      i++;
   }

   printf("Length of the string: %d\n", i);

   return 0;
}
