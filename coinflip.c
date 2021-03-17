#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t const MAX_LINE = 128;

typedef struct Player {
    char name [50]; 
    char bet [50]; 
    int wager; 
}Player; 

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
    print_msg("startup.txt");
    printf("How many players? ");
    int count;
    scanf("%d", &count); // I think the "\n" is interfering later
    while(getchar() != '\n'); // consume whitespace from scanf
   
    // Player Information
    Player players[count]; 
    int bet_choice;
    int i = 0;
    
    for (i = 0; i < count ; i++){
        // Name 
        printf("\nPlayer %d name\n--> ", i+1); 
        fgets(players[i].name, MAX_LINE, stdin); 
        players[i].name[strcspn(players[i].name, "\n")] = 0; // remove trailing "\n"
        
        // Bet
        printf("\n%s's bet?\nHeads: 1\nTails: 2\n--> ", players[i].name);
        scanf("%d", &bet_choice);
        while(getchar() != '\n'); // consume whitespace from scanf
        if(bet_choice == 1){
            strcpy(players[i].bet, "Heads");
        } else { 
            strcpy(players[i].bet, "Tails");
        }

        // Wager
        printf("\n%s's wager?\n--> ", players[i].name);
        scanf("%d", &players[i].wager);
        while(getchar() != '\n'); // consume whitespace from scanf

    }

    // Summary Print
    printf("\nSummary:\n");
    for (i = 0; i < count; i++){
        printf("%s; %s; $%d\n", players[i].name, \
            players[i].bet, players[i].wager);
    }
    
// OPEN ITEMS:

    // Makefile with automated tests confirming the inputs

    // -- Flip the coin --

    // Display the payout results

    return 0;
}
