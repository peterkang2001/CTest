#include <stdio.h>
#include <string.h>
#define STR_LENGTH 40

int main(int argc, char const *argv[])
{
	char str1[STR_LENGTH] = "To be or not to be";
	char str2[STR_LENGTH] = ", that is the question";

	if(STR_LENGTH > strlen(str1) + strlen(str2))
		printf("%s\n", strcat(str1, str2));
	else
		printf("String length is %lu\n", strlen(str1) + strlen(str2));
		printf("You can't put a quart into a pint pot.\n");
	return 0;
}