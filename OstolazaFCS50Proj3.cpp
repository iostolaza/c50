// OSTOLAZA, FRANCISCO
// CS50-Project 3 Stars Shape
// DUE 11/10/2024 23:59hrs

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <time.h>


int main() {

    // Print the project header
    printf("          OSTOLAZA, FRANCISCO - Project 3 \n");

    // initialize number
    int number;
    srand(time(0));

    // declare number
    number = rand()%5+5;

    // printing declared number
    printf("Number = %4d\n\n", number);

    // Print SHAPE A
    printf("\n SHAPE A\n");
    for (int row = 0; row<=number; row++ ){
        for (int col = 0; col<=row; col++ )
            printf("* ");
        printf("\n");

    }

    // Print SHAPE B
    printf("\n SHAPE B\n");
    for (int row = 0; row<=number; row++ ){
        for (int col = 0; col<=number+1; col++ ){
            if(row<col)
                printf("* ");
        }
        printf("\n");

    }

    // Print SHAPE C
    printf("\n SHAPE C\n");
    for (int row = 0; row<=number; row++ ){
        for (int col = 0; col<=number - row; col++ )
            printf("  ");
        for (int col = 0; col<=row; col++ )
            printf("* ");
        printf("\n");

    }

    // Print SHAPE D
    printf("\n SHAPE D\n");
    for (int row = 0; row<=number+1; row++ ){
        printf(" \n");

        for (int col = 0; col <=number+1; col++){
            if (row<col){
                printf("* ");
            } else {
                        printf("  ");
                  }
        }
    

    }

    // Print SHAPE E
    printf("\n SHAPE E\n");
    for (int row = 0; row<=number; row++ ){
        for (int col = 0; col<=row; col++ )
            printf("  ");
        printf("* ");
        printf("\n");

    }

    // Print SHAPE F
    printf("\n SHAPE F\n");
    for (int row = 0; row<number+1; row++ ){
        for (int col = 0; col<number + 1 - row; col++ )
            printf("  ");
        printf("* ");
        printf("\n");
    }
    
    
    // Print the project footer
    printf("\n");
    printf("          OSTOLAZA, FRANCISCO - End of Project");

    return 0;
}
