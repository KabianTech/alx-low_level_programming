#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - genereates random valid passwords
 * Return: always 0
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, h1, h2;

	srand(time(0));
	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index];
	}
	password[index] = '\0';

	if (sum != 2772)
	{
		h1 = (sum - 2772) / 2;
		h2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			h1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + h1))
			{
				password[index] -= h1;
				break;
			}
		}
	}

	for (index = 0; password[index]; index++)
	{
		if (password[index] >= (33 + h2))
		{
			password[index] -= h2;
			break;
		}
	}

	printf("%s", password);

	return (0);
}
