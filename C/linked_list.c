// https://www.youtube.com/watch?v=VOpjAHCee7c

#include <stdio.h>

struct node{
  int value;
  struct node *next;
};
typedef struct node node_t;

void printList(node_t *head){
  node_t *temporary = head;
  while(temporary != NULL){
      printf("- %d  ", temporary->value);
      temporary = temporary->next;
  }
  printf("\n");

}

int main(){
  node_t n1, n2, n3;
  node_t *head;

  n1.value = 2;
  n2.value = 3;
  n3.value = 23;

  head = &n1;
  n1.next = &n2;
  n2.next = &n3;
  n3.next = NULL;//end
  //inserting a 4th node between n1 & n2
  node_t n4;

  n4.value = 39;
  n4.next = &n2;
  n1.next = &n4;

  //this removes the first node
  head = head->next;

  printList(head);

}