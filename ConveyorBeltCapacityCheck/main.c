#include <stdio.h>

// Function to check if the conveyor belt can carry the packages
// Returns a message depending on whether the weight is within the total capacity
const char *Test(float weight, int motors)
{
    // If the total weight is less than or equal to the total capacity, return success message
    if (weight <= (motors * 5.6f))
    {
        return "Yes! The conveyor belt can carry the packages.";
    }

    // Otherwise, return failure message
    return "No! The conveyor belt cannot carry the packages.";
}

// Function to ask the user for a positive integer input
// Keeps prompting until a valid positive integer is entered
int AskForInt(const char *prompt)
{
    int value;
startoffunction:
    printf("%s", prompt);
    scanf_s("%d", &value);

    // Check if input is a positive integer
    if (value == (int)value && value > 0)
        return value;

    // Clear input buffer and prompt again if invalid
    while ((getchar()) != '\n')
        ;
    printf("dumbass, write a whole number \n"); // Error message for invalid input
    goto startoffunction;
}

// Function to ask the user for a positive float input
// Keeps prompting until a valid float is entered
float AskForFloat(const char *prompt)
{
    float value;
startoffunction2:
    printf("%s", prompt);

    if (scanf_s("%f", &value) == 1)
    {
        return value;
    }

    // Clear input buffer and prompt again if invalid
    while ((getchar()) != '\n')
        ;
    printf("dumbass, write a number \n"); // Error message for invalid input
    goto startoffunction2;

    // printf("dumbass"); // Error message for invalid input
    // goto startoffunction2;
}

// Main function
int main(void)
{
    float motors;
    float weight;

    // Ask user for number of motors (rounded down)
    motors = AskForInt("How many motors are carrying the packages? (whole numbers) ");
    // printf("DEBUG: motors = %.0f\n", motors); // Debug line

    // Ask user for total weight of packages
    weight = AskForFloat("What is the total weight of the packages? ");
    // printf("DEBUG: weight = %.2f\n", weight); // Debug line

    // Output whether the conveyor belt can carry the packages
    printf("%s\n", Test(weight, motors));

    return 0;
}
