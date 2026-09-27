#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0, square;
    for (int i = 1; i <= 5; i++)
    {
        square = i * i;
        printf("Square%d: %d\n", i, square);
        total += square;
    }
    printf("The sum of the first five squares is %d\n", total);
    return 0;
}
