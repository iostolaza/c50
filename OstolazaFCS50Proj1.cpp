// OSTOLAZA, FRANCISCO
// CS50-Project1 Count Pennies
// DUE 08/13/2024 23:59hrs

#include <stdio.h>

int main() {

    // Print the project header
    printf("OSTOLAZA, FRANCISCO - Project 1 \n");
    printf(" \n");

    float amount; // Variable to store the user input amount

    // Prompt the user to enter a monetary amount
    printf("Enter a monetary amount: ");
    scanf("%f", &amount); // Get the input and store it

    // Convert the float amount to an integer representing pennies (cents)
    int amountInPennis = (int)(amount * 100);

    // Calculate the dollar amount by dividing pennies by 100
    int dollarAmount = amountInPennis / 100;

    // Calculate the number of hundred-dollar bills
    int hundreds = dollarAmount / 100;
    dollarAmount = dollarAmount % 100; // Update hundreds with remainder 

    // Calculate the number of twenty-dollar bills
    int twenties = dollarAmount/ 20;
    dollarAmount = dollarAmount % 20; // Update twenties with remainder

    // Calculate the number of ten-dollar bills
    int tens = dollarAmount / 10;
    dollarAmount = dollarAmount % 10; // Update tens with remainder

    // Calculate the number of five-dollar bills
    int fives = dollarAmount / 5;
    dollarAmount = dollarAmount % 5; // Update fives with remainder

    // Calculate the number of one-dollar bills
    int ones = dollarAmount / 1;

    printf(" \n");

    // Calculate the remaining pennies after dollars have been removed
    int pennyAmount = amountInPennis % 100;

    // printf("%6.2f %4d %4d %4d\n", amount, amountInPennis, dollarAmount, pennyAmount);

    // Calculate the number of quarters (25 cents)
    int quarters = pennyAmount / 25;
    pennyAmount %= 25; // Update pennyAmount with remainder after quarters

    // Calculate the number of dimes (10 cents)
    int dimes = pennyAmount / 10;
    pennyAmount %= 10; // Update pennyAmount with remainder after dimes

    // Calculate the number of nickels (5 cents)
    int nickels = pennyAmount / 5;
    // Calculate the number of pennies left (1 cent)
    int pennies = pennyAmount % 5;

    // Print the results for dollar bills
    printf("Number of 100s = %d\n", hundreds);
    printf("Number of 20s = %d\n", twenties);
    printf("Number of 10s = %d\n", tens);
    printf("Number of 5s = %d\n", fives);
    printf("Number of 1s = %d\n", ones);
    printf(" \n");

    // Print the results for coins
    printf("Number of quarters = %d\n", quarters);
    printf("Number of dimes = %d\n", dimes);
    printf("Number of nickels = %d\n", nickels);
    printf("Number of pennies = %d\n", pennies);

    printf(" \n");
    // Print the project footer
    printf("OSTOLAZA, FRANCISCO - End of Project");

    return 0;
}
