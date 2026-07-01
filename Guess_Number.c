#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int RandomNumber()
{
    int n;
    srand(time(NULL));
    n = rand() % 100;
    return n;
}

int main()
{

    int UserNumber, GuessedNumber;
    int NoOfAttempts = 0;
    printf("Welcome Player To World of Guess Number Game \n");

    do
    {
        GuessedNumber = RandomNumber();
        NoOfAttempts++;
        printf("Enter a Number Between (1 - 100) : ");
        if (scanf("%d", &UserNumber) != 1)
        {
            printf("\nPlease Enter a Valid Number !!\n");
            break;
        }

        // printf("Number : %d\n", GuessedNumber);

        if (UserNumber < GuessedNumber)
        {
            printf("Your Number is Small try large Number !\n");
        }
        else if (UserNumber > GuessedNumber)
        {
            printf("Your Number is large try small Number !\n");
        }
        else if (UserNumber == GuessedNumber)
        {
            printf("Congratulations !!! You guessed the Number %d\n", GuessedNumber);
            printf("you Guessesd The Number in %d Attempts \n", NoOfAttempts);
        }
        else
        {
            printf("Inlvaid Error\n");
        }

    } while (UserNumber != GuessedNumber);

    return 0;
}