#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
	char size[3][12] = {
		{'6', '6', '6', '6', '7','7','7','7','7','7','7','7'},
		{'1', '5', '3', '7', ' ','1','1','3','1','5','3','7'},
		{'2', '8', '4', '8', ' ','8','4','8','2','8','4','8'}
	};
	int headsize[12] = {164, 166, 169, 172, 175, 178, 181, 184, 188, 191, 194, 197};

	char *psize = *size;
	int *pheadsize = headsize;

	float cranium = 0.0;
	int your_head = 0;
	bool hat_fount = false;
	bool too_small = false;

	printf("Enter the circumference of your head above your eyebrows \
		 in inhes as a decimal value:\n");
	scanf("%f", &cranium);
	your_head = (int)(8.0 * cranium);
	for(int i = 0; i < 12; i++)
	{
		if(your_head > *(pheadsize + i))
			continue;
		if((i == 0) && (your_head < (*pheadsize) - 1))
		{
			printf("You are the proverbial pinhead. No hat for you I'm afraid.\n");
			too_small = true;
			break;
		}
		if(your_head < *(pheadsize + i) -1)
			i--;
		printf("Your hat size is %c %c %c %c\n",
		*(psize + i), 
		*(psize + 1*12 + i),
		(i == 4) ? ' ' : '/',
		*(psize + 2 *12 + i) );
		hat_fount = true;
		break;
	}
	if(!hat_fount && !too_small)
		printf("You, in technical parlance, are a fathead. \
			No hat for your, I'am afraid.\n");
	return 0;
}







