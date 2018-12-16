// This program takes the amount of change owed to the user and outputs the least number of coins the cashier needs to give the user.
// The program uses quarters, dimes, nickels and pennies.

# include <stdio.h> // Add standard input, output library.
# include <math.h> // Add a math library.
# include <cs50.h> // Add cs50 library.

int main(void)
{
    float n;
    int coins;
    int remain;

    do
    {
        n = get_float("\033[0mChange owed: \033[4m"); // Gets the amount of change owed to the user and underlines the outputted amount.
    }
    while (n < 0);


    float x = n; // Puts the user's entered amount of change into a new float.
    x *= 100; // Convert dollars and cents to all pennies.
    int y = roundf(x); // Rounds the float contained in variable x and stores the rounded value in the variable y.

    coins = y / 25; // Finds how many quarters are owed the user.
    remain = y % 25; // Finds the remaing value after dividing by 25.
    y = remain; // Uses the variable y to hold the remaining amount of change.

    int d = y / 10; // Finds how many dimes are owed the user.
    remain = y % 10; // Finds the remaining value after dividing by 10.
    coins += d; // Adds the amount of dimes to the amount of coins.
    y = remain; // Uses the variable y to hold the remaining amount of change.

    int nic = y / 5; // Finds how many nickels are owed the user.
    remain = y % 5; // Finds the remaining value after dividing by 5.
    coins += nic; // Adds the amount of nickels to the amount of coins.
    coins += remain; // Adds the amount of pennies to the amount of coins.



    printf("\033[0m%i\n", coins); // Prints the total number of coins owed to the user.
}

