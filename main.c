#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "action.h"

typedef struct
{
    char line[1000]; // string to read
    bool require_action; // does it result in asking the player for input
    char actions[][1000];
} Event;

typedef struct
{
    int health;
    int health_max;
} Player;

typedef struct
{
    char list[100];
} List;

typedef struct {
    char name;
    char description;
} Room;

int ask_question(){
    char answer[] = {"unset"};
    scanf("%s", &answer);

    if (strcmp(answer, "pickup") == 0){
        printf("You pick up the bottle.\n");
        return 0;
    }
    else {
        printf("I'm sorry, I don't understand what you mean?\n");
        return 1;
    }
}

int main()
{
    Room rooms[100]; // list of rooms
    int currentRoom;
    
    Event elf = {
        "You awaken in a cell. It's dark, stone walls are covered in a thin layer of dust and the floor is damp. " 
        "There is a cell door made up of metal bars and a litt torch outside. You cannot see the torch because it's "
        "behind the stone walls on either side of the cell door. What do you do?\n",
    };
    printf("%s", elf.line);
    
    int result = 1;
    while (result == 1){
        printf("%s", "What do you do? :");
        result = ask_question();
    };
    
    printf("You leave.");
    return 0;
}

