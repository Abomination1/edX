#include <stdio.h>

double m_to_feet(double a);
double g_to_pou(double a);
double C_to_F(double a);

int main(void)
{
  //read 10 integers
  int nbConv=0;
  double item=0;
  char unit='m';
  //nb of conversions
  scanf("%d", &nbConv);

  for(int i=0; i<nbConv; i++){
    scanf("%lf %c", &item, &unit);


    if(unit == 'm'){
      printf("%lf ft", m_to_feet(item));
    }else if(unit =='g'){
      printf("%lf lbs", g_to_pou(item));
    }else{
      //f
      printf("%lf f", C_to_F(item));
    }
  }



    return 0;
}

double m_to_feet(double a){
    double result;
    result = a * 3.2808;
       return result;
}
double g_to_pou(double a){
    double b=a;
       return b * 0.002205;
}
double C_to_F(double a){
    double result;
    result = 32 + 1.8 * a;
       return  (result);
}
