#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	struct horse
	{
		int age;
		int height;
		char name[20];
		char father[20];
		char mother[20];
		struct horse *next;
	};

	struct horse *first = NULL;
	struct horse *current = NULL;
	struct horse *previous = NULL;

	char test = '\0';
	for(;;)
	{
		printf("Do you want to enter details of a%s horse (Y or N)?\n", first != NULL ? "nother" : "");
		scanf("%c", &test);
		if(tolower(test) == 'n')
			break;
		current = (struct horse*)malloc(sizeof(struct horse));

		if(first == NULL)
			first = current;
		if(previous != NULL)
			previous->next = current;

		printf("Enter the name of the horse:");
		scanf("%s", current->name);

		printf("\nHow old is %s", current->name);
		scanf("%d", &current->age);

		printf("\nHow high is %s (in hands)?", current->name);
		scanf("%d", &current->height);

		printf("\nWho is %s's father?", current->name);
		scanf("%s", current->father);

		printf("\nWho is %s's mother?", current->name);
		scanf("%s", current->mother);

		current->next = NULL;
		previous = current;
	}

	current = first;
	while(current != NULL)
	{
		printf("\n\n%s is %d years old, %d hands high,", current->name, current->age, current->height);
		printf(" and has %s and %s as parents.\n", current->father, current->mother);
		previous = current;
		current = current ->next;
		free(previous);
	}
	return 0;
}



