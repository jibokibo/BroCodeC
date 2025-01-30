#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main () {
  srand(time(0));
  int answer = (rand() % 100) + 1;
  int guess;

  printf("Welcome to a guess game!\n");
  printf("Please enter a number from 1 to 100:");
  scanf("%d", &guess);


  while (guess < answer){
    printf("too low, min jung! \n try again:");
    scanf("%d", &guess);
  }
  while (guess > answer){
    printf("too big, min jung! \n try again:");
    scanf("%d", &guess);
  }
  if (guess == answer){
      printf("Congratulations! You won!");
    }
  return 0;
}