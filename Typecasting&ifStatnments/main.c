#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
 
    int variable1 = 1;
    int variable2 = 2;
    
    if (variable1 == 2 || variable2 == 2){ // this is just to demo the 
        // logical operator ||
        printf("hi\n");    
    }
    

    float profit;
    int price = 10;
    int sales = 45;
    int daysWorked = 7;

    profit = ((float) price + (float) sales) / (float) daysWorked; // converts the 
    // following ints to a float, they are only turned to a float on this line.
    // after that they turn back into a int.
    printf("Average daily profit %.2f\n", profit);
    // if we did not typecast it the answer would be wrong since profit is a 
    // float and price and sales are ints.


    // the following code below is an example if a if Statement.

    int age;
    char gender;
    printf("How old are you?");
    scanf("%d", &age);

    if (age >= 16) {
        printf("you can drive!\n");

    }
    if (age < 16) {
        printf("you can not drive!\n");

    }

    // another way to do something like this...
    printf("How old are you?\n");
    scanf("%d", &age);

    if (age >= 18) {
        printf("you can enter this club! What is your gender?\n");

        scanf(" %c", &gender);

        if (gender == 'b') { 
            printf("you are a boy!"); 

        }
        if (gender == 'g') {
            printf("you are a girl"); // nested if statement (if statement 
            // within a if statement.)

        }
    } else { // when you only have 2 options you can say if else instead of 
        //saying (age >= 18) & (age <= 18
        printf("you are to young to enter this club\n");

    }
    
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int averageGrade;

    printf ("enter your marks\n");
    scanf("%d", &mark1);
    printf ("enter the next mark\n");
    scanf("%d", &mark2);       
    printf ("enter the next mark\n");
    scanf("%d", &mark3);
    printf ("enter the final mark\n");
    scanf("%d", &mark4);
    averageGrade = (mark1 + mark2 + mark3 + mark4)/4;
    
    printf ("your grade average is %d\n", averageGrade);
    
    if (averageGrade >= 80){
        printf ("That equals a 'A'\n");
    } else if (averageGrade >= 70 && averageGrade <=79){ // else if is for more 
        //then 2 options
     printf ("That equals a 'B'\n");
    } else if (averageGrade >= 60 && averageGrade <=69){
     printf ("That equals a 'C'\n");
    } else if (averageGrade >= 50 && averageGrade <=59){
     printf ("That equals a 'D'\n");
    } else if (averageGrade <= 49){ // could also put a else for the last option
     printf ("That equals a 'F', you failed!\n");
    }
    

    // to test more then one condition 
    if ((averageGrade >= 80 && averageGrade <=89) && (age >= 14)){ // use 
        //multiple variables for arguments
        printf("your are in high school and got honnors rool");
    } else if ((averageGrade >= 70 && averageGrade <=79) && (age >= 14)){
   printf("your are in high school and have a 'B' average");

    } else if ((averageGrade >= 60 && averageGrade <=69) && (age >= 14)){
       printf("your are in high school and have a 'C' average");
    } else if ((averageGrade >= 50 && averageGrade <= 59) && (age >= 14)){
       printf("your are in high school and have a 'D' average");
    } else if ((averageGrade <= 49) && (age >= 14)){
       printf("your are in high school and are failing!");
    }  
    
//%C-----formats the input or output of a single character and has to be used 
    // with char datatype, if you use this you must use a char as input. eg. 'a'.
//%S-----formats the input or output of a set of character(String) and has 
    //to used with a character array﻿

    return (EXIT_SUCCESS);
}

