/* intToEnglish.c - Is a simple program which translates integers into the equivalent English Word.
@author - Izum Adnan - 251202487 */

#include<stdio.h>

int main(){

    // Declared variable for user input
    int num;

    // Created char arrays for all groups of integers (Singles, Tens, Hundreds)
    char *single[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    char *ten[] = {"", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety", "one hundred"};
    char *hundred[] = {"", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"};

    // Print Statement displaying instructions for program
    printf("Please enter a value (1-999, 0 to quit): ");

    // Scan statement taking user input
    scanf("%d", &num);

    // Delcaring variables for the first, second and third digits of user input
    int result;
    int second;
    int third;

    // Condition the user decides to quit program
    if (num==0){
        return 0;
    }

    // Condition for when the user input is lower than 10
    if (num<10){
        printf("You entered the number %s \n\n", single[num]);
        main();

    }

    // Condition for when the user input is equal to and between 10-20
    if (num>=10 && num <=20){
        result = num - 10;
        printf("You entered the number %s \n\n", teens[result]);
        main();
    }

    // Condition for when the user input is between 20 and equal to 100
    if (num>20 && num <=100){
        result = num/10;
        second = num % 10;
        if (num == 100){
            printf("You entered the number %s\n\n", ten[result]);
            main();
        } else {
        printf("You entered the number %s-%s\n\n", ten[result],single[second]);
        main();
        }
    }

    // Condition for when the user input is between 100-999
    if (num>109 && num<120 || num>209 && num<220 || num>309 && num<320 || num>409 && num<420 || num>509 && num<520 || num>609 && num<620 || num>709 && num<720 || num>809 && num<820 || num>909 && num<920){
        result = num/100;
        second = (num%100)-10;
        printf("You entered the number %s and %s\n\n", hundred[result], teens[second]);
        main();
    } else {
            if (num>100 && num<1000){
            result = num/100;
            second = (num % 100) / 10;
            third = num % 10;
            if(third==0){
                printf("You entered the number %s and %s\n\n", hundred[result], ten[second]);
                main();
            }
            if(second==0){
                printf("You entered the number %s and %s\n\n", hundred[result], single[third]);
                main();
            }
            if (num == 200 || num == 300 || num == 400 || num == 500 || num ==  600 || num ==  700 || num == 800 || num == 900){
                printf("You entered the number %s\n\n", hundred[result]);
                main();
            } else {
                printf("You entered the number %s and %s-%s\n\n", hundred[result], ten[second], single[third]);
                main();
            }}
    }

    return 0;
}