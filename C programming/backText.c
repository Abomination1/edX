#include <stdio.h>
int main(void)
{
int line = 5;
  char arrayInt[line][40];

  for(int i = 0; i < line; i++){

      scanf("%s ", arrayInt[i]);
  }

  //printf("KONEC \n");

    for(int i = 0; i < line; i++){

      printf("%s ", arrayInt[(line - 1) - i]);
  }



    return 0;
}
