#include <stdio.h>
int main(void)
{
  int iTreeHigh, iTreeLeafs;

  //read tree heigh
  scanf("%d", &iTreeHigh);
  //read tree leafs
  scanf("%d", &iTreeLeafs);

  if(iTreeHigh <= 5 && iTreeLeafs >= 8){
    printf("%s\n","Tinuviel");
  }else if(iTreeHigh >= 10 && iTreeLeafs >= 10){
    printf("%s\n","Calaelen");
  }else if(iTreeHigh >= 8 && iTreeLeafs <= 5){
    printf("%s\n","Falarion");
  }else if(iTreeHigh >= 12 && iTreeLeafs <= 7){
    printf("%s\n","Dorthonion");
  }else{
    printf("%s\n", "Uncertain" );
  }

  //

    return 0;
}
