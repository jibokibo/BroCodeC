#include <stdio.h>

int main()
{
/* WRITE/APPEND A FILE "w"/"a" append means to add content, w overwrites/ writes a new document
*                      "r" opens the file only for reading  ↓  */
   FILE *pF = fopen("/Users/ali/Desktop/test.txt", "w");


	int a = 0;
   for (int i = 0; i < 10; i++){
   fprintf(pF, "Spongebob Squarepants\n"); // writes "Spongebob Squarepants" into the file

   		fprintf(pF," ");
   }

   fclose(pF);
   
   // DELETE A FILE
/*
   if(remove("test.txt") == 0)
   {
      printf("That file was deleted successfully!");
   }
   else
   {
      printf("That file was NOT deleted!");
   }
*/
   return 0;
}