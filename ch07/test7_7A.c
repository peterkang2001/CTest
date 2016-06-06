#include <stdio.h>
int main(int argc, char const *argv[])
{
	char board[3][3] ={
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};
	printf("value of board[0][0]  :%c\n", board[0][0]);
	printf("value of *board[0]  :%c\n", *board[2]);
	printf("value of **board  :%c\n", **board);
	return 0;
}