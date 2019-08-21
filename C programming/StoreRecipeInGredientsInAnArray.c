#include <stdio.h>
int main(void)
{
  int igrams[10];
  int iReadInt = 0;
  int Readinput = 0;
  int cell = 0;
    //read 10 integers
    int i=0;
    for(i=0;i<=9;i++){
        scanf("%d", &igrams[i]);
    //    printf("i: %d, g: %d\n",i,igrams[i] );

    }
    scanf("cell nb %d\n", &iReadInt );
    //int a = Readinput;


          printf("%d\n", igrams[iReadInt] );



    return 0;
}
