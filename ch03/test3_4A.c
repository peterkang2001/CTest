#include <stdio.h>

int main(int argc, char const *argv[])
{
	wchar_t letter = 0;
	printf("Enter an uppercase letter:\n");
	scanf("%lc", &letter);

	if(letter >= L'A')
	{
		if (letter <= L'A')
		{	
			letter = letter - L'A' + L'a';
			printf("You entered an uppercase %lc\n", letter);
		}
		else
		{
			printf("Try using the shift key, Bud! I want a capital letter.\n");
		}
	}
	return 0;
}