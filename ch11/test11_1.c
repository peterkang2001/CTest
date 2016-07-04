#include <stdio.h>
int main(int argc, char const *argv[])
{
	struct horse
	{
		int age;
		int height;
		char name[20];
		char father[20];
		char mother[20];
	};

	struct horse My_first_horse;

	printf("Enter the name of the horse:\n");
	scanf("%s", My_first_horse.name);

	printf("How old is %s\n", My_first_horse.name);
	scanf("%d", &My_first_horse.age);

	printf("How height is %s (in hands)?\n", My_first_horse.name);
	scanf("%d", &My_first_horse.height);

	printf("Who is %s's father?\n", My_first_horse.name);
	scanf("%s", My_first_horse.father);

	printf("Who is %s's mother?\n", My_first_horse.name);
	scanf("%s", My_first_horse.mother);

	printf("%s is %d years old, %d hands hight,", My_first_horse.name, My_first_horse.age, My_first_horse.height);
	printf(" and has %s and %s as parents.\n", My_first_horse.father, My_first_horse.mother);
	
	return 0;
}