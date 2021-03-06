#include <stdio.h>
const size_t BUFFER_LEN = 512;
int main(int argc, char const *argv[])
{
	char buffer[BUFFER_LEN];
	char *pS[3] = {NULL};
	char *pbuffer = buffer;
	size_t index = 0;

	printf("Enter 3 messages that total less than %u characters.\n", BUFFER_LEN-2);

	for(int i = 0; i < 3; i++)
	{
		printf("Enter %s message\n",  i>0 ? "another" : "a");
		pS[i] = &buffer[index];
		for(; index < BUFFER_LEN; index++)
		{
			if((*(pbuffer + index) == getchar()) == '\n')
			{
				*(pbuffer + index++) = '\0';
				break;
			}
			if((index == BUFFER_LEN) && ((*(pbuffer+index-1) != '\0') || (i < 2)))
			{
				printf("You ran out of space in the buffer.\n");
				return 1;
			}
		}
		printf("The strings you entered are:\n\n");
		for(int i = 0; i < 3; i++)
		{
			printf("%s\n", pS[i]);
		}
		printf("The buffer has %d characters unused.\n", BUFFER_LEN - index);
	}
	return 0;
}