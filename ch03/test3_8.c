#include <stdio.h>
int main(int argc, char const *argv[])
{
	int choice = 0;
	printf("Pick a number between 1 and 10 and you may win a prize!\n");
	scanf("%d", &choice);
	if((choice > 10) || (choice < 1))
		choice = 11;
	switch(choice)
	{
		case 7:
		  printf("Congratulation!\n");
		  printf("You win the collected works of Amos Gruntfuttock.\n");
		  break;
		case 2:
		  printf("You win the folding thermometer-pen-watch-umbrella.\n");
		  break;
		case 8:
		  printf("You win the lifetime supply of aspirin tables.\n");
		  break;
		case 11:
		  printf("Try between 1 and 10. You wasted your guess.\n");
		default:
		  printf("Sorry, you lose.\n");
		  break;

	}
	return 0;
}