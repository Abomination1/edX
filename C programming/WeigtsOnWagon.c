#include <stdio.h>
int main(void)
{
  //read nb of the cards
  int MaxCards=39;
  float sum_of_array;
  float A_CarsWeight[MaxCards];
  float A_CarsWeight_median[MaxCards];

  int iNbOfCards;

  scanf("%d", &iNbOfCards);

  for(int i =0; i < iNbOfCards; i++){
    //insert weight of the cards
    //read weights of the car
    //store into array
    scanf("%f", &A_CarsWeight[i]);
  //  printf("i: %d, carWeigt: %f\n", i, A_CarsWeight[i]);
  }

  //calculate median
  for(int i=0; i < iNbOfCards; i++){
     sum_of_array +=  A_CarsWeight[i];

  }
  //print sum
//  printf("SUM of array %lf \n", sum_of_array) ;
  float median = sum_of_array/(iNbOfCards);
//  printf("Mediana of values %lf \n", median) ;
    //define array with values for + or - values
    for(int i=0; i < iNbOfCards; i++){
       A_CarsWeight_median[i] +=  median - A_CarsWeight[i];
       printf("%.1f\n",A_CarsWeight_median[i]);
    }
  //if is smaler add -, if is bigger +
  //output values

 //output
 //print array




    return 0;
}
