#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	int chosen = 0;
	int guess = 0;
	int count = 3;
	int limit = 20;

	srand(time(NULL));
	chosen = 1 + rand() % limit;

	printf("This is a guessing game.\n");
	printf("I have chosen a number between 1 and 20 which you must guess.\n");
	for(; count > 0; --count)
	{
		printf("You have %d tr%s left.\n", count, count == 1? "y" :"ies");
		printf("Enter a guess:\n");
		scanf("%d", &guess);

		if(guess == chosen)
		{
			printf("You guessed it!\n");
			return 0;
		}
		if(guess < 1 || guess > 20)
			printf("I said between 1 and 20.\n");
		else
			printf("Sorry. %d is wrong.\n", guess);
	}
	printf("You have had three tries and failed.The number was %ld\n", chosen);
	return 0;
}