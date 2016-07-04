#include <stdio.h>
#include <wchar.h>
int main(int argc, char const *argv[])
{
	wchar_t text[100];
	wchar_t substring[40];

	printf("Enter the string to be searched(less than 100 characters):\n");
	fgetws(text, 100, stdin);

	printf("Enter the string sought (less than 40 characters):\n");
	fgetws(substring, 40, stdin);

	text[wcslen(text) - 1] = L'\0';
	substring[wcslen(substring) -1] = L'\0';

	printf("First string entered:\n%s\n", text);
	printf("Second string entered:\n%s\n", substring);

	for(int i = 0; (text[i] = towupper(text[i])); i++);
	for(int i = 0; (substring[i] = towupper(substring[i])); i++);

	printf("The second string %s found in the first.\n", 
		((wcsstr(text, substring) == NULL) ? "was not" : "was"));
	return 0;
}