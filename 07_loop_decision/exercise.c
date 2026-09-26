#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        float mark;
        printf("Enter mark (/40): ");
        scanf("%f", &mark);

        if (mark < 0 || mark >40)

            printf("Invalid mark for Student %d\n", i);

        else if (mark >= 24)
            printf("Student %d passed\n", i);
        else
            printf("Student %d failed\n", i);
    }
    return 0;
}
