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
    yellow(); 
    print_msg("welcome.txt");
    reset();

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
