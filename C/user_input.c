#include <stdio.h>
#include <string.h>


int main(){
  printf("What's your name?\n");
  char name [25];
  char health [20];
  fgets(name, 25, stdin);
  name[strlen(name)-1] = '\0';

  printf("Hello %s, how are you?",name);
  fgets(health, 20, stdin);
  name[strlen(health)-1] = '\0';

  /* switch (health){   // funktioniert nicht weil switch-case nur mit integer Variablen funktioniert
    case 'fine':
      printf("that's good to hear!");
      break;
    case 'okay':
      printf("you got something on your mind?");
      break;
    case 'not okay':
      printf("lol");
      break;

    default:
      printf("hahahahhsdh");
  }
*/
  printf("kann es sein dass %s ein bissl dumm ist?\n", name);
  return 0;


}