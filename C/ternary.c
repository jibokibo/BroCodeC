#include <stdio.h>

int findMax(int x, int y){

 /* if (x > y){
    return x;
  }
  else{
    return y;
  } */

 return (x > y) ? x : y; // ternary operator (condition) ? value if true : value if false
}


int main(){

  printf("%d", findMax(50, 7));

}