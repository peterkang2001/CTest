#include <stdio.h>
int main(int argc, char const *argv[])
{
	char initial = ' ';
	char name[80] = {0};
	char age[4] = {0};

	printf("Enter your first initial:\n");
	scanf("%c",&initial);
	printf("Enter your first name:\n");
	scanf("%s", name);

	if(initial != name[0])
		printf("%s, you got your initial wrong.\n", name);
	else
		printf("Hi, %s. Your initial is correct. Well done!\n", name);
	printf("Enter your full name and your age separated by a comma:\n");
	scanf("%[^,], %[01234567890]", name, age);
	printf("Your name is %s and your are %s years old\n", name, age);
	return 0;
}