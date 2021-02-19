#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void calculate(char string[1000])
{
	int c = 0;
	int count[95] = { 0 };
	int x = 0;

	while (string[c] != '\0') {
		if (string[c] >= ' ' && string[c] <= '~') {
			x = string[c] - ' ';
			count[x]++;
		}

		c++;
	}

	for (int i = 0; i < 95; i++)
	{
		if (i == 33)
		{
			i = i + 25;
		}
		printf("%c occurs %d times. \n", i + ' ', count[i]);
	}
}

int main()
{
	char string[1000] = { "" };
	int running = 1;

	while (running)
	{
		printf("Enter something to count the characters : \n");
		gets(string);
		for (int i = 0; string[i]; i++) {
			string[i] = tolower(string[i]);
		}
		calculate(string);

		if (string[0] == '\0')
		{
			system("@cls||clear");
			running = 0;
		}
	}
}