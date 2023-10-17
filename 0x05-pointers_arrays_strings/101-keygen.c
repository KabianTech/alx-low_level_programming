#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - genereates random valid passwords
 * Return: always 0
 */
int main(void)
{
	char password[15];
	int index, sum = 0, target = 2772;

	srand(time(0));

	for (index = 0; index < 14; index++)
	{ 
		password[index] = 33 + rand() % 94;
		sum += password[index];
	}

	password[index] = target - sum;
	password[15] = '\0';

	printf("%s\n", password);

	return 0;
}

