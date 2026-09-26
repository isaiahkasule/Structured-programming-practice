#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score;
    printf("Enter average score (%%): ");
    scanf("%f", &score);

    if (score >= 50)
        printf("You've attained the required standard and are promoted to the next class.\n");
    else
        printf("You have not attained the required standard for promotion.\n");
    return 0;
}
