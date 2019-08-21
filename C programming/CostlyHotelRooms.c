#include <stdio.h>
int main(void)
{

  //# con.
  int age, weight, price;

  //read age
  scanf("%d", &age);

  //read weight
  scanf("%d", &weight);

  //if age > 60 -> price 0
  if(age == 60){
    price = 0;

  }else if (age < 10){
    //if age < 10 -> price 5
    price = 5;


  }else{
    //else price 30 +  10 (if > 20 pounds)
    if(weight>20){
      price = 30 + 10;
    }else{
      price = 30;
    }
  }

  printf("%d\n", price );

    return 0;
}
