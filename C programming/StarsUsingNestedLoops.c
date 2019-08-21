#include <stdio.h>
int main(void) {
    //! showArray(list, cursors=[i])
    int maxLetter = 51;
    char word[maxLetter];
    int i = 0;
    //char SearchArray[2] = {D, E};
    int found,found_i = 0;
    //int exitcode =0;
    int wordlenght = 0;
    //printf("Which number are you looking for? \n");
    scanf("%s", word);

    i=0;
    while(word[i] != '\0' && i < maxLetter){
        i++;


    }
    wordlenght = i;

    i=0;
    while(word[i] != '\0' && !found && i < maxLetter){
        if(word[i] == 't' || word[i] == 'T'){
            found = 1;
            found_i = i;
        }
     //   printf("%c \n", word[i]);
        i++;
    }

    if(!found){
        printf("-1");

    }else{
        if(wordlenght%2==1){
            if(found_i +1 <= (wordlenght/2)+1){

                printf("%c", '1');
            }else {
                  printf("%c", '2');
            }
        }else{
            if(found_i < (wordlenght/2)){

                printf("%c", '2');
            }else {
                  printf("%c", '1');
            }
        }
    }
  //printf("\n%s\n","00000000");
  //printf("Found t-T at %d\n",found_i);
  //printf("wordlenght / 2 = : %d\n", (wordlenght/2));
	return 0;
}
