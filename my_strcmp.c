#include <stdio.h>
#include <string.h>

int my_strcmp(char s1[], char s2[])
{
	int loop;
	for (loop = 0; s1[loop] != '\0'; loop++)
	{
		if (s2[loop] == '\0')
		{
			return 1;
		}
		else if (s1[loop] > s2[loop])
		{
			return 1;
		}
		else if (s2[loop] > s1[loop])
		{
			return -1;
		}
	}
	if (s2[loop] == '\0')
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int main()

{
	char string1[100], string2[100];
	gets(string1);
	gets(string2);
	if (strcmp(string1, string2) == my_strcmp(string1, string2))
	{
		printf("SUCCESS!\n");
	}
	else
	{
		printf("ERROR!\n");
	}


	return 0;
}
