#include <stdio.h>
int main(void)
{

int countcities, CitySize, count = 0;
  //read 10 integers
scanf("%d", &countcities);

for(int i= countcities; i> 0; i--){
  scanf("%d", &CitySize);
    if(CitySize > 10000){
        count = count + 1;
    }
}
printf("%d\n", count );

    return 0;
}
