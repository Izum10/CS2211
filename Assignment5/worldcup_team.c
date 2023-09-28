/* worldCup_team.c - Is a C program which uses a linked list to represent a database for teams which will be used in the World Cup. 
Involves 6 different prompts: Insert, Search, Update, Print, Delete and Quit
@author - Izum Adnan - 251202487 */

#include "worldcup_team.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Main function
int tea(){

    // Variables which help throughout
    char op;
    int j=0;
    struct node team[200];
    int user_int, i;
    char team_name, seed[2], kit;
    
    // Goto instrunction which calls the menu function
    menu: 
        menu();
        scanf("%s", &op);

    // While loop which contains code for all user prompts
    while(op != 'q'){
        
        // Insert Prompt (1)
        if (op=='i'){
            printf("    Enter team code: ");
            scanf("%d", &user_int); 

        // Checks if user input code already exists
        if (user_int>=0){
                for (int a = 0; a < j; a++){
                    if(team[a].code == user_int){
                        printf("Team already exists.\n\n");
                        goto menu;
                    }}
                team[j].code = user_int;
        } else {
            printf("Team Already Exists \n\n");
            goto menu;
        }

            // Checks if user input name is within set range and then stores
            printf("    Enter team name: ");
            scanf("%s", team[j].name);
            if(strlen(team[j].name) <= 25){
            } else {
                printf("Name longer than acceptable length \n\n");
                goto menu;
            }

            // Checks if user input seeding is within set range and then stores
            printf("    Enter group seeding: ");
            scanf("%s", team[j].seed2);
            if (check(team[j].seed2)){
            } else {
                printf("Group seeding does not exist. \n\n");
                    goto menu;
            }   

            // Checks if user input color is within set range and then stores
            printf("    Enter the kit colour: ");
            scanf(" %c", &kit);
            if(kit == 'R' || kit == 'O' || kit == 'Y' || kit == 'G' || kit == 'B' || kit == 'I' || kit == 'V'){
                team[j].kit2 = kit;
            } else {
                printf("Kit colour does not exist. \n\n");
                goto menu;
            }
                j++;
            goto menu;
            
        }
        
        // Search Prompt (2)
        if(op == 's'){

            // Helper local variables
            int search;
            int index = -1;
            
            // Prints instructions for user
            printf("    Enter team code: ");
            scanf("%d", &search);

            // Initializes variable "index" if found in array
            for (int b = 0; b<j; b++){
                if(team[b].code == search){
                    index = b;
                }
            }

            // Prints if found
            if (index > -1){
                printf("Team Code\t\tTeam Name\t\tGroup Seeding\t\tPrimary Kit Colour\n");
                if(team[index].kit2 == 'R'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tRed\n", team[index].code, team[index].name, team[index].seed2); 
                    }
                    if(team[index].kit2 == 'O'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tOrange\n", team[index].code, team[index].name, team[index].seed2); 
                    }
                    if(team[index].kit2 == 'Y'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tYellow\n", team[index].code, team[index].name, team[index].seed2); 
                    }
                    if(team[index].kit2 == 'G'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tGreen\n", team[index].code, team[index].name, team[index].seed2); 
                    }
                    if(team[index].kit2 == 'B'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tBlue\n", team[index].code, team[index].name, team[index].seed2); 
                    }
                    if(team[index].kit2 == 'I'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tIndigo\n", team[index].code, team[index].name, team[index].seed2); 
                    }
                    if(team[index].kit2 == 'V'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tViolet\n", team[index].code, team[index].name, team[index].seed2); 
                    }
            } else {
                printf("Sorry, there is no team with that code.\n");
            }
            goto menu;
            }
        
        // Update Prompt (3)
        if(op == 'u'){

            // Helper local variables
            int search;
            int index = -1;

            // Checks if code exists in array
            printf("    Enter team code: ");
            scanf("%d", &search);
            for (int e = 0; e<j; e++){
                if(team[e].code == search){
                    index = e;
                }
            }

            // Prints user instruction, checks if it meets criteria and then updates
            if (index > -1){
                printf("    Enter team name: ");
                scanf("%s", team[index].name);
                if(strlen(team[index].name) < 26 ){
                } else {
                    printf("Name longer than acceptable length \n\n");
                    goto menu;
                }
                printf("    Enter group seeding: ");
                scanf("%s", team[index].seed2);
                if (check(team[index].seed2)){
                } else {
                printf("Group seeding does not exist. \n\n");
                    goto menu;
                }
                printf("    Enter the kit colour: ");
                scanf(" %c", &team[index].kit2);
                } else {
                    printf("There is no team with that code\n");
                goto menu;
            }

            goto menu;
        }

        // Print Prompt (4)
        if (op == 'p'){

            // Prints everything in structured array
            printf("Team Code\t\tTeam Name\t\tGroup Seeding\t\tPrimary Kit Colour\n");
            for(int c = 0; c<j+1; c++){
                    if(team[c].kit2 == 'R'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tRed\n", team[c].code, team[c].name, team[c].seed2); 
                    }
                    if(team[c].kit2 == 'O'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tOrange\n", team[c].code, team[c].name, team[c].seed2); 
                    }
                    if(team[c].kit2 == 'Y'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tYellow\n", team[c].code, team[c].name, team[c].seed2); 
                    }
                    if(team[c].kit2 == 'G'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tGreen\n", team[c].code, team[c].name, team[c].seed2); 
                    }
                    if(team[c].kit2 == 'B'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tBlue\n", team[c].code, team[c].name, team[c].seed2); 
                    }
                    if(team[c].kit2 == 'I'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tIndigo\n", team[c].code, team[c].name, team[c].seed2); 
                    }
                    if(team[c].kit2 == 'V'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tViolet\n", team[c].code, team[c].name, team[c].seed2); 
                    }
            }
            goto menu;
        }

        // Delete Prompt (5)
       if (op == 'd'){

            int search;
            int index = -1;
            
            // Prints instructions for user
            printf("    Enter Team code: ");
            scanf("%d", &search);

            // Initializes variable "index" if found in array
            for (i = 0; i<j; i++){
                if(team[i].code == search){
                    index = i;
                }
            } 
            
            // Sets Everytthing to Null essentially deleting it
            if (index >= -1){
                team[index].code = NULL;
                *team[index].name = NULL;
                *team[index].seed2 = NULL;
                team[index].kit2 = NULL;
                printf("Operation Completed \n");
            } else {
                printf("There is no Team with that code.\n");
                goto menu;
            }
            goto menu;
        } 

        return 0;

        }
    
    return 0;
    
    }

    // Delete Structure
    struct node *delete(struct node *head){
    int c;
    struct node *p;
    if (p != NULL){
        struct node *cur, *prev;
        for (cur = head, prev = NULL;
        cur != NULL && cur->code != c;
        prev = cur, cur = cur->next);
        if (cur == NULL)
            return head;
        if (prev == NULL)
            head = head->next;
        else
            prev->next = cur->next;
        free(cur);
        return head;
    }
    return 0;
}