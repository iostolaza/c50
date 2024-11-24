// OSTOLAZA, FRANCISCO
// CS50-Project 4 Craps game
// DUE 11/24/2024 23:59hrs

#include <stdio.h>
#include <math.h>
// #include <iostream>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define false 0
#define true 1

// Function initialization
int getRandom(int min, int max);
int rollDice(int curturn);
void getfooter();

int main(){ 

    // Print the project header
    printf("\n");
    printf("          OSTOLAZA, FRANCISCO - Project 4: Craps Game\n\n");
    
    // Initiate variables and seed
    srand(time(0));
    int comeBet;
    bool PLAY = true;
    int TURN = 1;
    
    // Roll the dice for the first turn
    printf("Coming out! \n");
    comeBet = rollDice(TURN);
    printf(" My bet is: %d\n", comeBet);
    
    // Check if the player wins or loses on the first turn
    if (TURN == 1 && comeBet == 7 || TURN == 1 && comeBet == 11){
        printf("Shooter roll is %d, winner! %d\n", comeBet, comeBet);
        getfooter();
        return false;
    } else if (TURN == 1 && comeBet == 2 || TURN == 1 && comeBet == 3 || TURN == 1 && comeBet == 12){
        printf("Craps! Shooter lose... %d\n", comeBet);
        getfooter();
        return false;
    } 
    
    // Continue game for until shooter wins
    while(PLAY){

        //Increment game turn and roll die
        TURN++;
        int currentRoll = rollDice(TURN);
        printf(": %d\n", currentRoll);
        
        //Winner condition if current roll equals comebet
        if (currentRoll==comeBet){
            printf("Winner! That's a winner %d\n", currentRoll);
            comeBet = currentRoll;
            TURN = 0;
            PLAY = true;
            
        }
        //Loser condition if die equals 7
        if (currentRoll == 7){
            printf("Shooter lost... %d\n", currentRoll);
            PLAY = false;
        }
    
        // Exit loop after 100 games
        if (TURN >= 100){
            PLAY = false;
        }
    }
    
    // Print the project footer
    getfooter();

    return 0;
    
}

// Function implementation

//Footer function
void getfooter(){
    printf("\n");
    printf("          OSTOLAZA, FRANCISCO - End of Project\n");
}

//Create random number function
int getRandom(int min, int max) {
    int random_number = rand() % (max - min + 1) + min;
    return random_number;
}

//Compute random number and sum game results
int rollDice(int curturn){
    
    int min = 1;
    int max = 6;
    int firstdice;
    int secondice;
    int sum;
    
    printf("%d. ", curturn);
    firstdice = getRandom(min, max);
    secondice = getRandom(min, max);
    
    printf("Current roll is: %d + %d", firstdice, secondice);
    
    sum = firstdice + secondice;
    return sum;
    
}