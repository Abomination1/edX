#include <stdio.h>
//! showMemmory(start=65520);
//## PROTOTYPE ##
int sumOfDigits(int a);
int sum;
int result;
int main(void)
{
  //read 10 integers
  int input;

  scanf("%d", &input);

sum = sumOfDigits(input);

printf("SUM : %d", sum);
    return 0;
}

int sumOfDigits(int a){
  //če ni več Digits
  printf("%d\n", a);

  int dev=a % 10;
  printf("%d\n", dev);
  if(a > 10){
    a = a / 10;

      result = dev + sumOfDigits(a);
} else{
    result = a;
}
  return result;
}

//sumOfDigits(6452) = 2 + sumOfDigits(645)
//sumOfDigits(645) = 5 + sumOfDigits(64)

//6452 %10 = 625 + 2
//625 % 10 = 62  + 5
//62 % 10 = 6    + 2
//_______________________--
//6 % 10  = 0    + 6  ==> KONEC - feed nb < 10!
