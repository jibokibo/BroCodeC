#include <stdio.h>
#include <stdlib.h>


int main(){
  int *a1 = malloc(sizeof(int) * 5);
  int *a2 = malloc(sizeof(int) * 5);

  for(int i = 0; i < 5; i++) a1[i] = i;
  for(int i = 0; i < 5; i++) a2[i] = i + 5;

  for(int i = 0; i < 1500000; i++){
     if(a1[i] != 0) printf("%d\n",a1[i]);
    //if(a1[i] != 0) printf("🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠🫠\n");
  }
  //for(int i = 0; i < 5; i++) printf("%d\n",a2[i]);

  printf("a1 = %p\n", a1);
  printf("a2 = %p\n", a2);
  free(a1);
  free(a2);
}