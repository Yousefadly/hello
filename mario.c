#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i, j, h, k;
    do
    {
           h = get_int("height: ");
    }
   while (h < 0 || h > 9);
    for (i = 0; i < h; i++)
    {
    for (j = 7; j > i; j--)
    {
        printf(" ");
    }
    for(k = 0; k < i + 1; k++)
    {
      printf("#");  
    }
    printf("\n");
}
}
