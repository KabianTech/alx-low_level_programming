#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - genereates random valid passwords
 * Return: always 0
 */
int main(void)
{
	char password[16];
	int index, sum, target;

	srand(time(0));
	target = 2772;

	for (index = 0, sum = 0; index < 15; ++index)
	{ 
		password[index] = '!' + rand() % ('~' - '!' + 1);
		sum += password[index];
	}
	
	password[15] = '\0';
	password[14] = target - sum + '!';

	printf("%s\n", password);

	return (0);
}

