#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char command[100];
} Action;

int check_command(char command[]){
    char commands[64][64][64] = {
        {"take", "grab", "pickup", "pick up"},      // For anything you take    // keys, clues, items
        {"open", "enter"},                          // For anything you open    // doors, lockers, windows
        {"look", "look at", "examine"}              // For anything you examine // Traps, Rooms, 
    };

}

















// 