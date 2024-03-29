/*
You'd like to implement a date feature in the 
C programming language. To this end you are 
provided with a structure definition, a main 
function, and two function prototypes: "readDate()" 
and "printDate()". All that is left for you to do is 
to write these two functions.

Here are the exact specifications:

The function readDate() should read 3 integers from 
the user input. The first integer is the year 
(a 4-digit number), the second integer is the 
month, and the third integer is the day of the 
date being read. The function should store these 
three numbers in the appropriate parts of the 
structure being passed into it.

The function printDate() should print the date 
stored in the variable passed into it in the 
following format: mm/dd/yyyy with a new line 
afterwards. So the month should be printed with 
two digits (01, 02, 03, ..., 11, 12), the day 
should be printed as two digits 
(01, 02, 03, ..., 30, 31), and the year 
should be printed as a 4-digit number.

You should not modify the provided code.
*/
#include <stdio.h>

struct date {
        int year;
        int month;
        int day;
    };

void readDate(struct date *);
void printDate(struct date);

int main(void) {
	struct date today;
	readDate(&today);
	printDate(today);
	return 0;
}

// Function implementation go here

void readDate(struct date * dateptr){
    scanf("%d", &(*dateptr).year);
    scanf("%d", &(*dateptr).month);
    scanf("%d", &(*dateptr).day);
}

void printDate(struct date myDate){


    if(myDate.month < 10){
        printf("0%d/", myDate.month);
    }else{
        printf("%d/", myDate.month);    
    }

    if(myDate.day < 10){
        printf("0%d/", myDate.day);
    }else{
        printf("%d/", myDate.day);    
    }
    printf("%d\n", myDate.year);
}
