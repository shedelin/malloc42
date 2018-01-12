#include <unistd.h>
#include <string.h>
#include <stdio.h> /////////
#include "../includes/malloc.h"

#define M (1024 * 1024)

void print(char *s)
{
	write(1, s, strlen(s));
}

int main()
{
	char *addr1;
	char *addr3;

	printf("miaou0\n");//////
	addr1 = (char *)malloc(16*M);
	printf("miaou1\n");///////
	strcpy(addr1, "Bonjours\n");
	printf("miaou2\n");////////
	print(addr1);
	printf("miaou3\n");////////
	addr3 = (char *)realloc(addr1, 128*M);
	printf("miaou4\n");////////
	addr3[127*M] = 42;
	printf("miaou5\n");////////
	print(addr3);
	printf("miaou6\n");////////
	return (0);
}
