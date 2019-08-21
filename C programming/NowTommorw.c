#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

/* add your function definitions here */
void printDate(struct date tod){
  printf("%d/%d/%d\n", tod.month, tod.day, tod.year);
}
void readDate(struct date * tod){
  scanf("%d", &(*tod).year);
  scanf("%d", &(*tod).month);
  scanf("%d", &(*tod).day);
}
struct date advanceDay(struct date tod){
  int y = tod.year;
  int m = tod.month;
  int d = tod.day;

  d = d + 1;

  struct date tomorrow;

  tomorrow.year = y;
  tomorrow.month = m;
  tomorrow.day = d;

  return ( tomorrow );

}
