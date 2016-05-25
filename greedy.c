#include <stdio.h>
#include <cs50.h>
#include <math.h>
/*This an example of a "greedy algorithm" that always takes the best
immediate, or local, solution while finding an answer.This example
involves a cashier that dispenses quarters, dimes, nickels and pennies
given a dollar amount in change.*/

int check();
int leastCoins(int input);

int main(void)
{
    int change = check();
    int coinCount = leastCoins(change);
    printf("%d\n", coinCount);
}

//function that checks for invalid user input and returns a value in cents
int check()
{
    printf("Hey dude! How much change is owed? \n");
    float input = GetFloat(); 
    int integerInput = round(input * 100);
    
    do
    {
        if (integerInput < 0)
        {
            printf("Hey dude! How much change is owed? \n");
            input = GetFloat();
            integerInput = round (input * 100);
        }
    } while (integerInput < 0);
    
    return integerInput;
}

//function to give the least amount of coins in change
int leastCoins(int input)
{
    int coinCount = 0;
    
    do
    {    
        if (input >= 25)
        {
            input = input - 25;
            coinCount++;
        }
    } while (input >= 25);
    
    do
    {
        if (input >= 10)
        {
            input = input - 10;
            coinCount++;
        }
    } while (input >= 10);
    
    do
    { 
        if (input >= 5)
        {
            input = input - 5;
            coinCount++;
        }
    } while (input >= 5);
    
    do
    { 
        if (input >= 1)
        {
            input = input - 1;
            coinCount++;
        }
    } while (input >= 1);
    
    return coinCount;
}
