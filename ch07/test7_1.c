#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number = 0;
	int *pointer = NULL;
	number = 10;

	printf("number's address: %p\n", &number);
	printf("number's value: %d\n", number);

	pointer = &number;
	//输出pointer的地址
	printf("\npointer's address: %p\n", &pointer);
	
	//pointer所占的字节数
	printf("pointer's size: %d bytes\n", sizeof(pointer));

	//存储在pointer的值	
	printf("pointer's value: %p\n", pointer);

	//pointer所含的地址内存储的值
	printf("value pointed to:%d\n", *pointer);
	return 0;
}