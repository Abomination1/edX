#include <stdio.h>
int main(void)
{
  //linar search
  int int_list[]={1,2,3,6,8,10,20,255,30,4,70};
  int sarchValue;
  int found = 0;
  int i = 0;


  i=0;
  scanf("%d", &sarchValue);

  while(!found && i < sizeof(int_list)){
    printf(".");
    if(int_list[i]== sarchValue){
      found = 1;
    }else{
      i++;
    }
  }
  printf("\nFound at array  : %d", i);

    return 0;
}
