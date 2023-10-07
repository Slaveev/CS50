#include <stdio.h>

int main(void)
{
    int cents, coins;
    printf("Enter your ammount for change: ");
    scanf("$d", &cents);
    if(cents == 25) 
    {
        cents -= 25;
        coins++;
    } 
    else if (cents == 10)
    {
        cents -= 10;
        coins++;
    } 
    else if (cents == 5)
    {
        cents -= 5;
        coins++;
    } 
    else if (cents == 1)
    {
        cents -= 1;
        coins++;
    }
    
    printf("You have %d\n", coins);
    
}