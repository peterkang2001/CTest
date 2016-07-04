#include <stdio.h>
#include <limits.h>
#include <wchar.h>
#include <ctype.h>
#include <wctype.h>

int main(int argc, char const *argv[])
{
	int count = 0;
	char ch = 0;
	printf("The printable characters are the following:\n");
	for(int code = 0; code <= CHAR_MAX; code++)
	{
		ch = (char)code;
		if(isprint(ch))
		{
			if((count++) % 32 == 0)
				printf("\n");
			printf("%c", ch);
		}
	}

	count = 0;
	wchar_t wch = 0;
	wprintf(L"\nThe alphabetic characters and ther codes are the following:\n");

	for(wchar_t wch = L'a'; wch <= L'z'; wch++)
	{
		if(count++ % 3 == 0)
			wprintf(L"\n");
		wprintf(L" %lc %#x %lc %#x", wch, (long)wch, towupper(wch), (long)towupper(wch));
	}
	return 0;
}