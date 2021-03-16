#include <stdio.h>
#include <string.h>

struct player {
    char name [50]; 
    char bet [50]; 
    int amount; 
}; 



int main (int argc, char *argv[])
{
    // record the names and wagers placed
    // use a struct

    struct player Adam; // Declare Adam of type customer
    
    // Init struct
    strcpy(Adam.name, "Adam");
    strcpy(Adam.bet, "Heads"); 
    Adam.amount = 20;
    
    printf("name: %s\nbet: %s\namount: $%d\n", \
        Adam.name, Adam.bet, Adam.amount);
    



    return 0;
}
