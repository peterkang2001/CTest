#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	char another_game = 'Y';
	bool correct = true;
	int counter = 0;
	int sequence_length = 0;
	time_t seed = 0;
	int number = 0;

	printf("To play Simple Simon,\n");
	printf("watch the screen for a sequence of digits.\n");
	printf("watch carefully, as the digits are only displayed for a sencond!\n");
	printf("The computer will remove then, and then prompt you to enter the same sequence.\n");
	printf("When you do, you must put spaces between the digits.\n");
	printf("Good Luck!\nPress Enter to play\n");
	do
	{
		correct = true;
		counter = 0;
		sequence_length = 2;
		while(correct)
		{
			sequence_length += counter++ % 3 == 0;
			seed = time(NULL);
			srand((unsigned int)seed);
			for (int i = 1; i <= sequence_length; i++)
			{
				printf("%d\n", rand() % 10);
			}
			srand((unsigned int)seed);
			for (int i = 1; i <= sequence_length; i++)
			{
				scanf("%d", &number);
				if (number != rand() % 10)
				{
					correct = false;
					break;
				}
			}

		}
		printf("Do you want to paly again(y/n)?\n");
		scanf("%c", &another_game);
	} while(toupper(another_game) == 'Y');
	return 0;
}










