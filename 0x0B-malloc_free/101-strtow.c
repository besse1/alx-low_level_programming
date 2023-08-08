#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
int *count_char(char *strlen, int c);
char **split_string(char **arrystn, char *str);


/**
* strtow - this function  splits a string into words
* @str: a ponter to the string to be operated on
* Return: NULL if str == NULL or str == ""
*/
char **strtow(char *str)
{
	int i;
	int c = 0;
	int *strlen;
	char **arrystn;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		c++;
	if (c == 0)
		return (NULL);

	c = count_words(str);
	strlen = count_char(str, c);

	arrystn = (char **) malloc(c * sizeof(char *));
	if (arrystn == NULL)

		return (NULL);

	for (i = 0; i < c; i++)
	{
		arrystn[i] = malloc((strlen[i] + 1) * sizeof(char));
		if (arrystn[i] == NULL)

			return (NULL);
	}

	arrystn = split_string(arrystn, str);
	return (arrystn);
}

/**
* count_words - counts the number of words in str.
* @str: a pointer to the string to be counted
* Return: returns an int
*/
int count_words(char *str)
{
	int i;
	int c = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			c++;
		}
	}

	return (c);
}

/**
* count_char - counts the number of characters and stores it
* @str: the string with the words to be counted
* @c: the number of words in str
* Return: NULL if str == NULL or str == ""
*/
int *count_char(char *str, int c)
{
	int i = 0, j = 0, s = 0, k = 0;

	int *strlen = malloc(c * sizeof(int));

	if (strlen == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		s = 0;
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			for (j = i; str[j] != '\0'; j++)
			{
				if (str[j]  == ' ')
				{
					strlen[k] = s;
					k++;
					break;
				}
				s++;
			}
		}
	}
	return (strlen);
}

/**
* split_string - puts each word from the original string str.
* @arrystn: the array of strings
* @str: the original string
* Return: returns arrystn as a pointer NULL if str == NULL or str == ""
*/
char **split_string(char **arrystn, char *str)
{
	int i, j, k, s;

	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		s = 0;
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			for (j = i; str[j] != '\0'; j++)
			{
				if (str[j]  == ' ')
				{
					arrystn[k][j] = '\0';
					break;
				}
				arrystn[k][s] = str[j];
				s++;
			}
			k++;
		}
	}
	arrystn[k] = NULL;

	return (arrystn);
}
