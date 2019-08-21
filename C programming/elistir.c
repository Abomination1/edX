#include <stdio.h>

//Write your function prototype here
void ChangeAge(int *a);

int main(void){
	int array[] = {4, 6, 12, -5, -7, 3, 1, 0, -10};
	int *ptr1, *ptr2;
	ptr1 = array+2;
	printf("Your new age will be %d!\n", *ptr1);
	ptr2 = &ptr1[5];
	printf("Your new age will be %d!\n", *ptr2);

	printf("Your new age will be %d!\n", *(ptr2-3));
	return 0;
}

void ChangeAge(int * a){
	if( * a >= 21){
	* a = * a - 10;
}else{
	* a = (* a) *2;
}

}
//Write your function here
