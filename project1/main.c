#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int number, no_of_guess = 0;
    srand(time(0));

    int randomNumber = (rand() % 100) + 1;

    // printf("Random Number : % d\n",randomNumber);
    do
    {
        /* code */
        printf("Guess the number ");
        scanf("%d", &number);
        if (number > randomNumber)
        {
            printf("Lower number please \n");
        }
        else
        {
            printf("Higher  number please \n");
        }
        no_of_guess++;
    } while (number != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guess);

    return 0;
}