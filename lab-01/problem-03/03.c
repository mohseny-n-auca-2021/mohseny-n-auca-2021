#include <stdio.h>

#include <string.h>

int main(void)
{
	puts("What is your full name ?");

	char fullName[512];
	fgets(fullName, sizeof(fullName), stdin);

	fullName[strcspn(fullName, "\n")] = 0;

	printf("Hello, %s!\n", fullName);

	return 0;
}
