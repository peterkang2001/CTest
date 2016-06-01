#include <stdio.h>
int main(int argc, char const *argv[])
{
	char str[][40] = {
		"To be or not to be",
		", that is the question"
	};

	int count[] = {0, 0};

	for(int i = 0; i < 2; i++)
	{
		while(str[i][count[i]])
			count[i]++;
	}

	if(sizeof str[0] < count[0] + count[1] + 1)
		printf("Your can't put a quart into a pint pot.\n");
	else
	{
		count[1] = 0;
		while((str[0][count[0]++] = str[1][count[1]++]));

		printf("%s\n", str[0]);
	}
	return 0;
}