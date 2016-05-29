#include <stdio.h>
int main(int argc, char const *argv[])
{
	char letter = 0;
	printf("Enter an upper case letter:\n");
	scanf("%c", %letter);
	if ((letter >= 'A') && (letter <= 'Z'))
	{
		letter += 'a' - 'A';
		printf("You enter an uppercase %c.\n", letter);
	}
	else
	{
		printf("You did not enter an uppercase letter.\n");
	}
	return 0;
}