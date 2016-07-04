#include <stdio.h>
int main(int argc, char const *argv[])
{
	char initial[2] = {0};
	char name[80] = {0};

	printf("Enter your first initial:\n");
	gets(initial);
	printf("Enter your name:\n");
	gets(name);

	if(initial[0] != name[0])
		printf("%s, you got your initial wrong.\n", name);
	else
		printf("Hi, %s. Your initial is correct. Well done!\n", name);

	return 0;
}