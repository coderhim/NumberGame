// this program generates a random number from 0 to 100 
// Author : Himanshu
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("Number between 0 and 100  is  %d ", num);
    return 0;
}