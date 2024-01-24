#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number = rand() % 100 + 1,user_input, count = 0;
    while (1)
    {
        count++;
        printf("\nGuess the random number: ");
        scanf("%d", &user_input);

        if (user_input > number)
        {
            printf("You choose a greater number\n");
        }
        else if (user_input < number)
        {
            printf("You choose smaller number\n");
        }
        else if (user_input == number)
        {
            printf("you choose write number\n");
            break;
        }
        else
        {
            break;
        }
    }
    printf("\nYou choose write number in %d attempts", count);

    return 0;
}
