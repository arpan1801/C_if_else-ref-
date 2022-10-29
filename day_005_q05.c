/* Name = Arpan Kumar Bartia
   section= E
   branch= CSE
   reg no= 2041002035
*/
#include<stdio.h>
#define JAN 31
#define FEB 28 
#define MAR 31
#define APR 30
#define MAY 31
#define JUN 30 
#define JUL 31
#define AUG 31
#define SEP 30
#define OCT 31
#define NOV 30
#define DEC 31

void leap_year(int day, int month, int year);

int main(){
  int day, month, year;
  
  printf("Enter the month, day and year (in that order) separated by spaced>\n");
  scanf("%d %d %d", &month, &day, &year);
  
  leap_year(day, month, year);
  
  
  return(0);
}

void leap_year(int day, int month, int year){
  int leap_year = 0;
  if(year % 100 == 0 && year % 400 == 0){
    printf("%d is a leap year", year);
    leap_year = 1;
  }
  else if(year % 100 != 0 && year % 4 == 0){
    printf("%d is a leap year\n", year);
    leap_year = 1;
  } 
  else{
    printf("%d is not a leap year\n", year);
  }
}
