#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

int main(int argc, char *argv[] ){
	int *number = malloc(sizeof(int) * 5);
      for(int i = 1; i < argc; i++){
          if(argc > 6) number = realloc(number, (argc - 1) * sizeof(int));
          number[i-1] = atoi(argv[i]);
      }
	for(int i = 0; i < argc; i++){
          	//if(number[i] == 0) break;
		printf("number[%d]: %d\n", i, number[i]);
	}
	sleep(5000);
       printf("dsfjn");


}