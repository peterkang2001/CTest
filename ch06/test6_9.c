#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	char text[100];
	char substring[40];

	printf("Enter the string to be searched(less than 100 characters):\n");
	fgets(text, sizeof(text), stdin);

	printf("Enter the string sought (less than 40 characters):\n");
	fgets(substring, sizeof(substring), stdin);

	text[strlen(text) - 1] = '\0';
	substring[strlen(substring) - 1] = '\0';

	printf("First string entered:\n%s\n", text);
	printf("Second string entered:\n%s\n", substring);

	for(int i = 0; (text[i] = toupper(text[i])); i++);
	for(int i = 0; (substring[i] = toupper(substring[i])); i++);

	printf("The Second string %s found in the First.\n", 
		((strstr(text, substring) == NULL)? "was not" :" was"));
	return 0;
}