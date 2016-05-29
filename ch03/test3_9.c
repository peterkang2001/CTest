#include <stdio.h>
int main(int argc, char const *argv[])
{
	char answer = 0;
	printf("Enter Y or N:\n");
	scanf("%c", &answer);

	switch(answer)
	{
		case 'y':
		case 'Y':
			printf("You responded in the affirmative.\n");
			break;
		case 'n':
		case 'N':
		  printf("You responded in the negative.\n");
		  break;
		default:
		  printf("You did not respond correctly...\n");
		  break;
	}
	return 0;
}