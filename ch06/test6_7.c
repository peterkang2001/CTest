#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str1[] = "This string contains the holy grail.";
	char str2[] = "the holy grail";
	char str3[] = "the holy grill";

	if(strstr(str1, str2) == NULL)
		printf("\"%s\" was not found.\n", str2);
	else
		printf("\"%s\" was found in \"%s\"\n", str2, str1);

	if(strstr(str1, str3) == NULL)
		printf("\"%s\" was not found.\n", str3);
	else
		printf("We shouldn't get to here!");


	return 0;
}