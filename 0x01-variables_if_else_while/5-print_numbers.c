#include <stdio.h>

/**
  *main-Entry Point=>prints all digits from 0 to 9
  *Return: 0 (success)
  */

int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		printf("%d", counter);
		counter++;
	}
	printf("\n");
	return (0);
}
