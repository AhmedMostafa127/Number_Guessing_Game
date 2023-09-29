#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(int N)
{
	int number, guess, numberofguess = 0;

	srand(time(0));

	number = rand() % N;

	printf("Guess a number between 1 and %d\n",N);
	printf("You have only 10 attempts to guess the number correctly \n");

	do {

		if (numberofguess > 10) {
			printf("\nYou Lose!\n");
			break;
		}
        printf("Guess the number : ");
		scanf("%d", &guess);

		if (guess > number)

		{
			printf("Lower number please!\n");
			numberofguess++;
		}

		else if (number > guess)

		{
			printf("Higher number please!\n");
			numberofguess++;
		}

		else
			printf("You guessed the number in %d attempts!\n",numberofguess+1);

	} while (guess != number);
}

// Driver Code
int main()
{
	int N = 100;

	guess(N);

	return 0;
}
