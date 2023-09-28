/* worldCupDB.c - Is a C program which prompts the user of 4 different options, to get help, to control teams, to control players and
to quit. If called one of the controlled programs it calls the functions within the other files.
@author - Izum Adnan - 251202487 */

#include "worldcup_team.c"
#include "worldcup_player.c"
#include "worldCupDB.h"
#include<stdio.h>

int main(){
    char op;

// Calls Menu Display
display:
    display(); 
    scanf("%s", &op);

    // Quit prompt (1)
    while (op != 'q'){

        // Help Prompt (2)
        if (op == 'h'){
            printf("\nWelcome to the 2211 World Cup Database. " 
            "Here you will be able to control, "
            "Teams and Players included within the World Cup.\n" 
            "Choose One of the Following Prompts: \n"
            "Press 't' to Control Teams \n"
            "Press 'p' to Control Players\n"
            "Press 'q' to Quit Program\n");
        }

        // Team Prompt (3) - Calls Function within worldcup_team.c
        if (op == 't'){
            printf("\nYou Can Now Control Teams");
            printf("\nPrompts: Insert(i), Select(s), Update(u), Print(p) or Delete(d)\n");
            tea();
        }

        // Player Prompt (4) - Calls Function within worldcup_player.c
        if (op == 'p'){
            printf("\nYou Can Now Control Players");
            printf("\nPrompts: Insert(i), Select(s), Update(u), Print(p) or Delete(d)\n");
            pea();
        }

        // Calls Display again
        goto display;

    }

    return 0;
}