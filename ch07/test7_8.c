#include <stdio.h>
int main(int argc, char const *argv[])
{
	char board[3][3] ={
		{'1', '5', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};
	for(int i = 0; i < 9; i++)
	{
		printf("board:%c\n", *(*board + i));
	}
	//printf("%s", *board);
	return 0;
}
