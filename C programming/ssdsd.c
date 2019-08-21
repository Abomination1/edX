#include <stdio.h>
int main(void)
{
	char type;
	int num, length, i;
	int total = 0;


        scanf("%c %d", &type, &length);

        if(type == 'i'){
                total += length*sizeof(int);
        }
        else if(type == 'd'){
            total += length*sizeof(double);
        }
        else if(type == 's'){
            total += length*sizeof(short);
        }
        else if(type == 'c'){
            total += length*sizeof(char);
        }
        else{
            printf("Invalid tracking code type");
            return 0;
        }


	printf("%d MB %d KB and %d B",total/1000000 total/1000,total%1000 );

	return 0;
}
