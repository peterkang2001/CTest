#include <stdio.h>
int main(int argc, char const *argv[])
{
	long multiple[] = {15L, 25L, 35L, 45L};
	long *p = multiple;
	for(int i = 0 ; i < (sizeof(multiple) / sizeof(multiple[0])); i++)
	{
		printf("address p+%d (&multiple[%d]):%d *(p+%d) value:%d\n",
		i, i, p+i, i, *(p+i) );
		printf("Type long occupies: %d bytes\n", sizeof(long));
	}
	return 0;
}