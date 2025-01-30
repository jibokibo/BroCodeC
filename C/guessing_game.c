#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(0));
    int guess;
	int answer = rand() % 100 + 1;
	int tries = 0;

    do{
      	printf("Enter a guess:");
    	scanf("%d",&guess);
        if (guess > answer){
          printf("too high!\n");
        }else if(guess < answer){
        	printf("too low!\n");
        }else{
          printf("Congrats! You got it right!\n");
        }
        tries++;
    }while(guess != answer);

   	printf("guesses:%d", tries);


	return 0;
}






















