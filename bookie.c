#include <stdio.h>
#include <string.h>

struct customer {
    char name [50]; 
    int bet; 
    int won; 
    int payout; 
}; 



int main (int argc, char *argv[])
{
    // record the names and wagers placed
    // use a struct

    struct customer Adam; // Declare Adam of type customer
    
    // Init struct
    strcpy(Adam.name, "Adam");
    Adam.bet = 20; // Dollars 
    Adam.won = 0;
    Adam.payout = 0;
    
    printf("name: %s\nbet: %d\nwon: %d\npayout: %d\n", \
        Adam.name, Adam.bet, Adam.won, Adam.payout);
    



    return 0;
}
