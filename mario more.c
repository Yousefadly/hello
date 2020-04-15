#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h, i, k, j, d, m;
    do
    {
    h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    for (i = 0; i < h; i++)
    {
    for (j = 7 ; j > i; j--)
    {
        printf(" ");
    }
    for (k = 0; k < i + 1 ; k++)
    {
        printf("#");
     }
    printf("  ");
    for (m = 0; m < i + 1; m++)
    {
        printf("#");
        }
    for (d = 7; d > i; d--)
    {
        printf(" ");
    } 
    printf("\n");
    }
}
