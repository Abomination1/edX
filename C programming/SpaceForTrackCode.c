#include <stdio.h>

int main(void)
{
  //read 10 integers
  int nb;
  int value;
  int sum = 0;
  int error = 0;
//  int name;
char A;

  scanf("%d", &nb);

  for(int i=0; i<nb;i++){
      scanf("%d %c", &value, &A);

      if(A == 'i'){
        //INT * 4
        sum += (value * 4);

      }else if(A == 'd'){
        //double * 8
        sum += (value * 8);

      }else if(A == 'c'){
        //C * 1
        sum += (value * 1);

      }else{
        printf("invalid tracking code type ");
        error = 1;
       break;
      }
  }

if(!error){
    printf("%d bytes", sum);
}

    return 0;
}
