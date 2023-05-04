#include <stdio.h>
#include <string.h>

/**
 * check_password - checks password
 * @input: pointer
 * Return: 0 or 1
 */


int check_password(char *input)
{
	char *password = "SPaCIoS";
	int i = 0;

	while (input[i] != '\0')
	{
		if (input[i] != password[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - writes pasword
 * Return: 0 on succes
 */

int main(void)
{
	char input[20];

	printf("Enter the password: ");
	scanf("%s", input);
	if (check_password(input))
	{
		printf("Correct!\n");
	}
	else
	{
		printf("Wrong!\n");
	}
	return (0);
}
