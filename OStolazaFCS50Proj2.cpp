// OSTOLAZA, FRANCISCO
// CS50-Project2 Monthly Payment
// DUE 08/27/2024 23:59hrs

#include <stdio.h>
#include <math.h>

// Function initialization
float computeMonthPayment(float p, float r, int m);
void computeBalance(float *tI, float *bal, float mRate, float *tP, float mp);


int main() {

    // Print the project header
    printf("          OSTOLAZA, FRANCISCO - Project 2 \n");

    // Initializing Variables
    float principal;
    float annualInRate;
    float monInRate;

    int numOfYears;
    int numOfMonths;

    float monPMT;
    float totalPMT;
    float toInterest;
    float toPrincipal;
    float balance;

    // Prompt and read loan components
    printf("Enter principal, annual interest rate and loan period, in years: \n");
    scanf("%f %f %d", &principal, &annualInRate, &numOfYears);

    // Calculating monthly and total payment - Payment conversion
    monInRate = annualInRate / 1200;
    numOfMonths = numOfYears * 12;

    monPMT = computeMonthPayment(principal, monInRate, numOfMonths);
    totalPMT = monPMT*numOfMonths;

    // Printing results
    printf("\n");
    printf("Principal = %.2f\n", principal);
    printf("Annual Interest Rate = %.2f\n", annualInRate);
    printf("Years of Loan = %d\n", numOfYears);
    printf("Monthly Payment = %.2f\n", monPMT);
    printf("Total Payment = %.2f\n", totalPMT);
    printf("\n");

    // Calculate loan bal for 24 months
    printf("Month   to interest    to principal    balance\n");
    printf("-------------------------------------------------------\n");
    
    // Initialize balance as principal
    balance = principal;

    // Loop to calculate and display the balance for 24 months
    for(int monNum = 1; monNum <= 24; monNum++){

        computeBalance(&toInterest,&balance,monInRate, &toPrincipal, monPMT);
        printf("%4d   %8.2f       %8.2f         %8.2f\n", monNum, toInterest, toPrincipal, balance);
    }


    // Print the project footer
    printf("\n");
    printf("          OSTOLAZA, FRANCISCO - End of Project");

    return 0;
}

// Function implementation

//Compute Monthly Payment Function
float computeMonthPayment(float p, float r, int m){
    float monthlyPayment; //initialize payment variable
    monthlyPayment = p*r/(1.0 - 1.0/(pow(1+ r, m)));  //Calculate Monthy Payment with input parameters
    return monthlyPayment; //Return the Monthly Payment Value
}

// Compute Balance Function
void computeBalance(float *tI, float *bal, float mRate, float *tP, float mp) {
    *tI = *bal * mRate; // Calculate interest paid this month
    *tP = mp - *tI;  // Calculate principal paid this month
    *bal -= *tP; // Update the balance
}