// Author : Himanshu
// This is a number Guessing game Single player !
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess, attemps = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    // printf("Number between 0 and 100  is  %d \n", num);
    printf("****WELCOME****\n");
    do
    {
        printf("Enter a number between 0 to 100\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower number please\n");
        }
        else if (guess < num)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("Correct Guess in %d attemps\n ", attemps);
            printf("****Congratulations!!****\n");
        }
        attemps++;
    } while (guess != num);
    return 0;
}