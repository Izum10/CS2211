/* worldCup_team.h - Header File For worldcup_team.c
@author - Izum Adnan - 251202487 */

#ifndef TEAM_FILE
#define TEAM_FILE
#define NULL 0
#include <stdio.h>

    // Creates Linked List
    struct node {
        int code;
        char name[25];
        char seed2[3];
        char kit2;
        struct node *next;
    };
    struct node *head = NULL;

    // Function to find code within list
    struct node *findCode(int c){
        struct node *p;
        for (p = head;
            p != NULL && c > p->code;
            p = p->next);

        if (p != NULL && c == p->code)
            return p;
        return NULL;
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

    // Function to Print output of instructions
    void menu() {
        printf("\nEnter operation code: ");
}


#endif