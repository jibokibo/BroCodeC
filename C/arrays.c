#include <stdio.h>

int main(){

  int numbers [2][3];

  numbers [0][0] = 1;
  numbers [0][1] = 2;
  numbers [0][2] = 3;
  numbers [1][0] = 4;
  numbers [1][1] = 5;
  numbers [1][2] = 6;

  printf("rows: %d\ncolumns: %d\n", sizeof(numbers)/sizeof(numbers[0]), sizeof(numbers[0])/sizeof(numbers[0][0]));

  for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
    for(int j = 0; j < sizeof(numbers[0])/sizeof(numbers[0][0]); j++){
      printf("%d ", numbers[i][j]);
    }
    printf("\n");
  }


}