#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>


int main(){
  srand(time(0));
  for(int line = 10; line > 0; line --){

    for(int col =0; col <= 10; col++){
    	char randomLetter = 'A' + (rand() % 26);
      printf("%c",randomLetter);
	sleep(1);
    }
 }
}