#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        printf("Enter the height: ");
        scanf("%d", &height);
    } while (height < 1 || height > 8);
    
    for (int rows = 0; rows < height; rows++)
    {
        for(int space = height - rows - 1; space > 0; space--)
        {
            printf(" ");
        }
        for(int hash = 0; hash < rows + 1; hash++)
        {
            printf("#");
        }
        printf(" ");
        for(int right_hash = 0; right_hash < rows + 1; right_hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    
}