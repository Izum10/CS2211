/* worldCup_player.c - Is a C program which uses a linked list to represent a database for player which will be used in the World Cup. 
Involves 6 different prompts: Insert, Search, Update, Print, Delete and Quit
@author - Izum Adnan - 251202487 */
#include "worldcup_player.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>    

// Main function
int pea(){

    // Variables which help throughout
    char op;
    int j=0;
    struct n player[2200];
    int user_int, i;
    char player_name, seed[2], kit;
    
    // Goto instrunction which calls the me function
    me: 
        me();
        scanf("%s", &op);

    // While loop which contains code for all user prompts
    while(op != 'q'){
        
        // Insert Prompt (1)
        if (op=='i'){
            printf("    Enter Player code: ");
            scanf("%d", &user_int); 

        // Checks if user input code is within set range and then stores
        if (user_int>=0){
                for (i = 0; i < j; i++){
                    if(player[i].code == user_int){
                        printf("Player already exists.\n\n");
                        goto me;
                    }}
                player[j].code = user_int;
        } else {
            printf("Player Already Exists \n\n");
            goto me;
        }

            // Checks if user input name is within set range and then stores
            printf("    Enter Player name: ");
            char temp3;
            scanf("%c",&temp3);
            scanf("%[^\n]", player[j].name);
            if(strlen(player[j].name) <= 50){
            } else {
                printf("Name longer than acceptable length \n\n");
                goto me;
            }

            // Checks if user input age is within set range and then stores
            printf("    Enter Player Age: ");
            scanf("%d", &player[j].seed2);
            if (player[j].seed2 >= 17 && player[j].seed2 <=99){
            } else {
                printf("Player Age is Unacceptable \n\n");
                    goto me;
            }   

            // Inputs Club Name
            printf("    Enter the Player's Club: ");
            char temp;
            scanf("%c",&temp);
            scanf("%[^\n]", player[j].kit2);
                j++;
            goto me;
            
        }
        
        // Search Prompt (2)
        if(op == 's'){

            // Helper local variables
            int search;
            int index = -1;
            
            // Prints instructions for user
            printf("    Enter Player code: ");
            scanf("%d", &search);

            // Initializes variable "index" if found in array
            for (i = 0; i<j; i++){
                if(player[i].code == search){
                    index = i;
                }
            }

            // Prints if found
            if (index > -1){
                printf("Player Code\t\tPlayer Name\t\tPlayer Age\t\tPlayer Club\n");
                    printf("%d\t\t\t%-24s%.2d\t\t\t%s\n", player[index].code, player[index].name, player[index].seed2, player[index].kit2); 
            } else {
                printf("Sorry, there is no Player with that code.\n");
            }
            goto me;
            }
        
        // Update Prompt (3)
        if(op == 'u'){

            // Helper local variables
            int search;
            int index = -1;

            // Checks if code exists in array
            printf("    Enter Player code: ");
            scanf("%d", &search);
            for (i = 0; i<j; i++){
                if(player[i].code == search){
                    index = i;
                }
            }

            // Prints user instruction, checks if it meets criteria and then updates
            if (index > -1){
                printf("    Enter Player name: ");
                char temp4;
                scanf("%c",&temp4);
                scanf("%[^\n]", player[index].name);
                if(strlen(player[index].name) <= 50){
                } else {
                    printf("Name longer than acceptable length \n\n");
                    goto me;
                }
                printf("    Enter Player Age: ");
                scanf("%d", &player[index].seed2);
                if (player[index].seed2 >= 17 && player[index].seed2 <=99){
                } else {
                printf("Player Age is Not Acceptable. \n\n");
                    goto me;
                }
                printf("    Enter the Player's Club: ");
                char temp2;
                scanf("%c", &temp2);
                scanf("%[^\n]", player[index].kit2);
                } else {
                    printf("There is no Player with that code\n");
                goto me;
            }

            goto me;
        }

        // Print Prompt (4)
        if (op == 'p'){

            // Prints everything in structured array
            printf("Player Code\t\tPlayer Name\t\tPlayer Age\t\tPlayer Club\n");
            for(i = 0; i<j+1; i++){
                if(player[i].seed2 >= 17 && player[i].seed2 <= 99)
                    printf("%d\t\t\t%-24s%.2d\t\t\t%s\n", player[i].code, player[i].name, player[i].seed2, player[i].kit2); 
            }
            goto me;
        }

        // Delete Prompt (5)
       if (op == 'd'){

            int search;
            int index = -1;
            
            // Prints instructions for user
            printf("    Enter Player code: ");
            scanf("%d", &search);

            // Initializes variable "index" if found in array
            for (i = 0; i<j; i++){
                if(player[i].code == search){
                    index = i;
                }
            } 
            
            if (index >= -1){
                player[index].code = NULL;
                *player[index].name = NULL;
                player[index].seed2 = NULL;
                *player[index].kit2 = NULL;
                printf("Operation Complete \n");
            } else {
                printf("There is no Player with that code.\n");
                goto me;
            }
            goto me;
        } 

        return 0;

        }
    
    return 0;
    
    }