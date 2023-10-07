#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    // get users input about weeks and store it in hours array
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    // get how many hours per week student studied
    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    // iterate through all the hours so we can sum it in a variable total
    int total = 0;
    for (int i = 0; i < weeks; i++)
    {
        total += hours[i];
    }

    if(output == 'T')
    return (float) total;
    return total / weeks;
}