#include "shell.h"

/**
 * interactive - this will return true if my shell is in it's interactive mode
 * @info: this is the struct address
 *
 * Return: Returns 1 if shell is in interactive mode and if not in teh interactiev mdoe will return a 0
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delimeter - checking if character is a delimeter
 * @k: the char to check
 * @delimeter: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delimeter(char k, char *delim)
{
	while (*delimeter)
		if (*delimeter++ == k)
			return (1);
	return (0);
}

/**
 *_isalpha - this will check for the alphabetic characters
 *@k: The character to input
 *Return: if k is an alphabet return 1, if not k, return 0
 */

int _isalpha(int k)
{
	if ((k >= 'l' && k <= 'r') || (k >= 'L' && k <= 'R'))
		return (1);
	else
		return (0);
}

/**
 *shell_atoi - converts a string to an integer
 *@a: the string to be converted
 *Return: if the string has no numbers return, if there are numbers return the converted number
 */

int shell_atoi(char *a)
{
	int m, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (m = 0;  s[m] != '\0' && flag != 2; m++)
	{
		if (s[m] == '-')
			sign *= -1;

		if (s[m] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[m] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
