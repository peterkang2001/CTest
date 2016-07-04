#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool str_in(char **);//指向char指针的指针
void str_sort(const char *[], int);
void swap(void **p1, void **p2);
void str_out(char *[], int);

const size_t BUFFER_LEN = 256;
const size_t NUM_P = 50;

int main(int argc, char const *argv[])
{
	char *pS[NUM_P];
	int count = 0;
	printf("Enter successive lines, pressing Enter at the end of each line.\nJust press Enter to end.\n");

	for(count = 0; count < NUM_P; count++)
	{
		if(!str_in(&pS[count]))
			break;
	}
	str_sort(pS, count);

	str_out(pS, count);

	return 0;
}

bool str_in(char **pString)
{
	char buffer[BUFFER_LEN];
	if(gets(buffer) == NULL)
	{
		printf("Error reading string.\n");
		exit(1);
	}
	if(buffer[0] == '\0')
		return false;

	*pString = (char*)malloc(strlen(buffer) + 1);
	
	if(*pString == NULL)
	{
		printf("Out of memeory.\n");
		exit(1);
	}
	strcpy(*pString, buffer);
	return true;
}

void str_sort(const char *p[], int n)
{
	char *pTemp = NULL;
	bool sorted = false;

	while(!sorted)
	{
		sorted = true;
		for(int i = 0; i < n - 1; i++)
		{
			if(strcmp(p[i], p[i+ 1]) > 0)
			{
				sorted = false;
				swap(&p[i] , &p[i + 1]);
			}
		}
	}
}

void swap(void **p1, void **p2)
{
	void *pt = *p1;
	*p1 = *p2;
	*p2 = pt;
}

void str_out(char *p[], int n)
{
	printf("Your input sorted in order is:\n");
	for(int i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);
		free(p[i]);
		p[i] = NULL;
	}
	return;
}
















