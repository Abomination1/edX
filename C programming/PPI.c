#include <stdio.h>
int main(void)
{
  int MAX_ING = 10;
  double PPI[MAX_ING], sum;
  double Weight[MAX_ING];
  double Output[MAX_ING];
  int iNbOfIngredients;

  //scan NB_ING.
  scanf("%d\n", &iNbOfIngredients );
  if(iNbOfIngredients > MAX_ING){
    iNbOfIngredients = 10;
  }

  //scanPPI
  for(int i=0; i<iNbOfIngredients; i++ ){
    scanf("%lf ", &PPI[i] );
  }
  //scan WEight
  for(int i=0; i<iNbOfIngredients; i++ ){
    scanf("%lf ", &Weight[i] );
  }

  for(int i=0;i<iNbOfIngredients; i++ ){
    Output[i] = PPI[i] * Weight[i];
  }

  for(int i=0;i<iNbOfIngredients; i++ ){
      sum =  sum + Output[i];
  }
  printf("%.7lf\n", sum );

    return 0;
}
