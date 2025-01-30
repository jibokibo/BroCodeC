#include <stdio.h>
#include <stdlib.h>

typedef union{
  int asc;
  char ch;

} potato;


// Alle Variablen nutzen selben Speicher(i.d.R. so groß wie der größte Datentyp innerhalb der Union)
// -> Haben selben Wert, werden aber durch verschiedenen Datentyp anders daargestellt
int main(int argc, char *argv[]){

  	int lol = atoi(argv[1]);
    printf("lol = %d\n", lol);
    potato sweet = {lol};
    printf("%c\n", sweet.ch);
    printf("%c", 132);
    printf("%d\n", sweet.asc);



}