/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include<Stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void str_words_in_rev(char *input, int len)
{
	int i, j, v = 0;
	char *b;
	b = (char *)malloc(sizeof(int)*len);
	*(input + len) = ' ';
	*(input + len + 1) = '\0';
	for (i = len - 1; i >= 0; i--)
	{
		if (*(input + i) == ' ' || i == 0)
		{
			if (i == 0)
				i = -1;
			for (j = i + 1; *(input + j) != ' '; j++)
			{
				b[v] = input[j];
				v++;
			}
			b[v] = ' ';
			v++;
		}
	}
	*(b + v) = '\0';
	for (i = 0; *(b + i) != '\0'; i++)
		input[i] = b[i];
}

