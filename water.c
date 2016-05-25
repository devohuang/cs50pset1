#include <stdio.h>
#include <cs50.h>

/*This script converts the amount of water used during a shower (in minutes)
into a number of bottles that can store that water*/

int main(void)
{
    int minutes;   
    do
    {
        printf("minutes: ");
        minutes = GetInt();
        if (minutes == 0)
        {
            printf("minutes: ");
            GetInt();
        }
        else if (minutes < 0)
        {
            printf("minutes: ");
            GetInt();
        }
        else
        {
        int bottles = minutes * 12;
        printf("bottles: %d\n", bottles);
        }
    } while (minutes == 0 || minutes < 0);
}