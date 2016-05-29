#include <stdio.h>
int main(int argc, char const *argv[])
{
	char letter = 0;
	printf("Enter an uppercase letter:\n");		
	scanf("%c", &letter);

	if (letter >= 'A')
	{
		if (letter <= 'Z')
		{
			letter = letter - 'A' + 'a';
			printf("You entered an uppercase %c\n", letter);
		}
		else
		{
			printf("Try using the shift key, Bud! I want a capital letter.\n");
		}
	}
	else
	{
		printf("You didn't enter an uppercase letter\n");
	}
	return 0;
}