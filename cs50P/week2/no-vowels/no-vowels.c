// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
    // check if its entered more than 1 word
    if(argc != 2)
    {
        printf("Wrong command-line argument");
        return 1;
    }

    // create a var that will start from position 1
    string word = argv[1];

    string result = replace(word);

    printf("%s\n", result);
}

string replace(string input)
{
    string output = input;

    // iterate through the array of text so we can change the vowels to numbers
    for(int i=0; i < strlen(input); i++)
    {
        char c = tolower(input[i]);
        switch(c)
        {
            case 'a':
                output[i] = '6';
                break;
            case 'e':
                output[i] = '3';
                break;
            case 'i':
                output[i] = '1';
                break;
            case 'o':
                output[i] = '0';
                break;
            default:
                output[i] = input[i];
                break;
        }
    }
    return output;
}