// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    // get users input for password
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

bool valid(string password)
{
    // make all bool var false
    bool checkLower = false;
    bool checkUpper = false;
    bool checkNumber = false;
    bool checkSymbol = false;
    for(int i=0; i<strlen(password); i++)
    {
        // check if password is valid
        if(islower(password[i]))
            checkLower = true;
        if(isupper(password[i]))
            checkUpper = true;
        if(isdigit(password[i]))
            checkNumber = true;
        if(!isalnum(password[i]))
            checkSymbol = true;

    }

    // if everything is true then password is valid
    if(checkLower == true && checkUpper == true && checkNumber == true && checkSymbol == true)
    {
         return true;
    }
    return false;
}
