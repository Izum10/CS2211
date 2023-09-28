/* worldCup_player.h - Header File For worldcup_player.c
@author - Izum Adnan - 251202487 */

#ifndef TEAM_FILE2
#define TEAM_FILE2
#define NULL 0
#include <stdio.h>

    // Creates Linked List Structure
    struct n {
        int code;
        char name[49];
        int seed2;
        char kit2[49];
        struct n *next;
    };
    struct n *he = NULL;

    // Function to find code within list
    struct n *findPlayer(int c){
        struct n *p;
        for (p = he;
            p != NULL && c > p->code;
            p = p->next);

        if (p != NULL && c == p->code)
            return p;
        return NULL;
    }

    // Function to Print output of instructions
    void me() {
        printf("\nEnter operation code: ");
}

#endif