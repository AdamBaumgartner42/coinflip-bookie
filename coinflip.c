#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t const MAX_LINE = 128;

struct player {
    char name [50]; 
    char bet [50]; 
    int amount; 
}; 

void yellow ()
{
    printf("\033[1;33m");
}

void reset() 
{
    printf("\033[0m");
}
    


void print_msg(const char *filename)
{
    char *line = calloc(MAX_LINE, 1);
    FILE *file = fopen(filename, "r");

    while(fgets(line, MAX_LINE, file)){ 
        printf("%s", line);
    }

    free (line);
    fclose (file);
}


int main (int argc, char *argv[])
{

    // Spash Screen
    yellow(); 
    print_msg("welcome.txt");
    reset();
    
    // Get game inputs
    //print_msg("startup.txt");
    // total number of players

    printf("how many players? ");
    int count;
    scanf("%d", &count);
    printf("player count: %d\n", count);

    // init array with player structs
        
    // For loop to input the names, bets and amounts

    // record the names and wagers placed
    // use an array of structs

    // -- Flip the coin --

    // Display the payout results

    struct player Adam; // Declare Adam of type customer
    
    // Init struct
    strcpy(Adam.name, "Adam");
    strcpy(Adam.bet, "Heads"); 
    Adam.amount = 20;
    
    printf("name: %s\nbet: %s\namount: $%d\n", \
        Adam.name, Adam.bet, Adam.amount);
    



    return 0;
}
