#include <stdio.h>
#include <cs50.h>

//This script outputs a mario pyramid given a user input of a height.

int UserInput();

int main (void)
{
    //checks correctness of user input
    int number;
    number = UserInput();
    do
    {
        if (number < 0 || number >= 24)
        {
            number = UserInput();
        } 
    } while (number < 0 || number >= 24);
    
    //builds mario pyramid
    for (int i = 0; i < number; i++)
    {
    
        for (int j = 0; j < number-i-1; j++)
        {
            printf(" ");
        }
    
        for (int k = 0; k < i+2; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}

//function to retrive user input
int UserInput()
{
    printf("Height: ");
    int input = GetInt();
    return input;
}