#include <stdio.h>
int main(int argc, char const *argv[])
{
	char str1[] = "To be or not to be";
	char str2[] = ", that is the question";
	int count = 0;
	while(str1[count] != '\0')
		count++;
	printf("The length of the string \"%s\" is %d characters.\n", str1, count);

	while(str2[count] != '\0')
		count++;
	printf("The length of the string \"%s\" is %d characters.\n", str2, count);

	return 0;
}