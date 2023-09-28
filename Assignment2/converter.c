/* converter.c - Is a simple C program which performs simple conversions.
@author - Izum Adnan - 251202487 */

#include<stdio.h>

int main(){

    // Declared Variable for user input
    int key;
    
    // Print Statement displaying instructions for Program
    printf("Please Press 1 to Convert between Kilograms & Pounds\n" 
    "Please Press 2 to Convert between Hectares and Acres\n"
    "Please Press 3 to Convert between Litres and Gallons\n"
    "Please Press 4 to Convert between Kilometre and Mile\n"
    "Please Press 5 to Quit Program\n"
    "- Enter Here: ");
    
    // Scan Statement taking user input
    scanf("%d", &key);

    // Declared variables for which options user chooses, the value inputed, the result
    char conversion;
    float val;
    float result; 


    // Switch statement with all options in correspondance to user input
    switch (key) {
        
        // Case 1 where user chooses conversion between Kilograms and Pounds
        case 1:
        printf("Please Press K to Convert from Kilograms to Pounds\n"
        "Please Press P to Convert from Pounds to Kilograms\n");
        printf("- Enter Here ");
        scanf(" %c", &conversion);
        if(conversion == 'K') {
        printf("Please enter value here: ");
        scanf("%f", &val);
        result = val * 2.20462;
        printf("\nYour conversion is %f \n\n", result);
        main();
        } else if (conversion == 'P'){
            printf("Please enter value here: ");
            scanf("%f", &val);
            result = val/2.20462;
            printf("\nYour conversion is %f \n\n", result);
            main();
        }
        break;

        // Case 2 where user chooses conversion beweeen Hectares and Acres
        case 2:
        printf("Please Press H to Convert from Hectares to Acres\n"
        "Please Press A to Convert from Acres to Hectares\n");
        printf("- Enter Here ");
        scanf(" %c", &conversion);
        if(conversion == 'H') {
        printf("Please enter value here: ");
        scanf("%f", &val);
        result = val * 2.47105;
        printf("\nYour conversion is %f \n\n", result);
        main();
        } else if (conversion == 'A'){
            printf("Please enter value here: ");
            scanf("%f", &val);
            result = val/2.47105;
            printf("\nYour conversion is %f \n\n", result);
            main();
        }
        break;

        // Case 3 where user chooses conversion between Litres and Gallons
        case 3:
        printf("Please Press L to Convert from Litres to Gallons\n"
        "Please Press G to Convert from Gallons to Litres\n");
        printf("- Enter Here ");
        scanf(" %c", &conversion);
        if(conversion == 'L') {
        printf("Please enter value here: ");
        scanf("%f", &val);
        result = val * 0.264172;
        printf("\nYour conversion is %f \n\n", result);
        main();
        } else if (conversion == 'G'){
            printf("Please enter value here: ");
            scanf("%f", &val);
            result = val/0.264172;
            printf("\nYour conversion is %f \n\n", result);
            main();
        }
        break;

        // Case 4 where use chooses conversion between Kilometre and Mile
        case 4:
        printf("Please Press K to Convert from Kilometre to Mile\n"
        "Please Press M to Convert from Mile to Kilometre\n");
        printf("- Enter Here ");
        scanf(" %c", &conversion);
        if(conversion == 'K') {
        printf("Please enter value here: ");
        scanf("%f", &val);
        result = val * 0.621371;
        printf("\nYour conversion is %f \n\n", result);
        main();
        } else if (conversion == 'M'){
            printf("Please enter value here: ");
            scanf("%f", &val);
            result = val/0.621371;
            printf("\nYour conversion is %f \n\n", result);
            main();
        }
        break;

        // Case 5 where user chooses to quit program
        case 5:
        break;

        // In the case, the user inputs an invalid value - the program alerts them and restarts
        default:
        printf("\n Invalid Choice Please Enter Again \n\n");
        main();
        break;
    }

    return 0;
} 