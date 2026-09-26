#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum = 0, average;
    for (int i = 1; i <= 4; i++)
    {
        float score;
        printf("Enter score%d: ", i);
        scanf("%f", &score);
        printf("Score%d: %.2f\n", i, score);
        sum += score;
    }

    average = sum / 4;

    printf("\nThe average of the scores is %.2f!\n", average);
    return 0;
}
