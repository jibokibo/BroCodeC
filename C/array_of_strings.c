#include <stdio.h>
#include <string.h>

int main()
{
   char cars[][10] = {"Mustang","Corvette","Camaro"};

   //cars[0] = "Tesla";
   strcpy(cars[0], "Tesla");// strcpy() is a function that copies a string into another string

   for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
   {
      printf("%s\n", cars[i]);
   }

   return 0;
}