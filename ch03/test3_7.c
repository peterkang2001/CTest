#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
	int age = 0;
	int college = 0;
	int subject = 0;
	bool interview = false;

	printf("What college? 1 for harvard, 2 for Yale, 3 for other:\n");
	scanf("%d", &college);
	printf("What subject? 1 for Chemistry, 2 for economics, 3 for other:\n");
	scanf("%d", &subject);
	printf("How old is the applicant?\n");
	scanf("%d", &age);

	if((age > 25 && subject == 1) && (college == 3 || college == 1))
		interview == true;
	if (college == 2 && subject == 1)
		interview = true;
	if(college == 1 && subject == 2 && !(age > 28))
		interview = true;
	if (college == 2 && (subject == 2 || subject == 3) && age > 25)
		interview = true;
	if(interview)
		printf("Give 'em an interview\n");
	else
		printf("Reject 'em\n");

	return 0;
}