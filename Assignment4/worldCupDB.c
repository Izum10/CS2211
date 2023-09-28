/* worldCupDB.c - Is a C program which uses a structured array to represent a database for teams which will be used in the World Cup. 
Involves 5 different prompts: Insert, Search, Update, Print and Quit
@author - Izum Adnan - 251202487 */

#include<stdio.h>
#include <string.h>

// Structure function (essentially makes an array)
struct arr {
    int code;
    char name[25];
    char seed2[3];
    char kit2;

};

// Function to Print output of instructions
void menu() {
    printf("\nEnter operation code: ");
}

// Function to check whether group stage fits set range
int check(char arr[3]) {
    char letter = arr[0];
    char num = arr[1];

    int l_ascii = (int)letter;
    int nascii = (int)num;

    if((l_ascii >= 65 && l_ascii <= 72) && (nascii >= 49 && nascii <= 52)) {
        return 1;
    } else {
        return 0;
    }
}

// Main function
int main(int argc, char* argv[]){

    // Variables which help throughout
    char op;
    struct arr team[31];
    int j=0;
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

        // Checks if user input code is within set range and then stores
        if (user_int>=0 && user_int<32){
                for (i = 0; i < j; i++){
                    if(team[i].code == user_int){
                        printf("Team already exists.\n\n");
                        goto menu;
                    }}
                team[j].code = user_int;
        } else {
            printf("Team code out of bounds, only enter from 0-31 \n\n");
            goto menu;
        }

            // Checks if user input name is within set range and then stores
            printf("    Enter team name: ");
            scanf("%s", team[j].name);
            if(strlen(team[j].name) < 26 ){
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
            for (i = 0; i<j; i++){
                if(team[i].code == search){
                    index = i;
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
            for (i = 0; i<j; i++){
                if(team[i].code == search){
                    index = i;
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
                    printf("There is no team with that code");
                goto menu;
            }

            goto menu;
        }

        // Print Prompt (4)
        if (op == 'p'){

            // Prints everything in structured array
            printf("Team Code\t\tTeam Name\t\tGroup Seeding\t\tPrimary Kit Colour\n");
            for(i = 0; i<j+1; i++){
                    if(team[i].kit2 == 'R'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tRed\n", team[i].code, team[i].name, team[i].seed2); 
                    }
                    if(team[i].kit2 == 'O'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tOrange\n", team[i].code, team[i].name, team[i].seed2); 
                    }
                    if(team[i].kit2 == 'Y'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tYellow\n", team[i].code, team[i].name, team[i].seed2); 
                    }
                    if(team[i].kit2 == 'G'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tGreen\n", team[i].code, team[i].name, team[i].seed2); 
                    }
                    if(team[i].kit2 == 'B'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tBlue\n", team[i].code, team[i].name, team[i].seed2); 
                    }
                    if(team[i].kit2 == 'I'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tIndigo\n", team[i].code, team[i].name, team[i].seed2); 
                    }
                    if(team[i].kit2 == 'V'){
                        printf("%d\t\t\t%-24s%.2s\t\t\tViolet\n", team[i].code, team[i].name, team[i].seed2); 
                    }
            }
            goto menu;
        }

        return 0;

        }
    
    return 0;
    
    }