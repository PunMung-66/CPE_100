#include <stdio.h>

void scan(int day, int mon, int year){
  int numday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int check = 0;
  scanf("%d/%d/%d", &day, &mon, &year);
  if(year%4 == 0){
    if(year/100){
      if(year/400) check = 1;
      check = 0;
    }
    check = 1;
  }
  if(check) numday[1] = 29;
  if(day < 1 || day > numday[mon - 1]){
    puts("Input date is invalid. Enter a valid date again.");
    scan(day, mon, year);
  }
  if(mon < 1 || mon > 12){
    puts("Input date is invalid. Enter a valid date again.");
    scan(day, mon, year);
  }
}

int main(void) {
  int day, mon, year;
  scan(day, mon, year);
  puts("Input date is valid.");
  return 0;
}