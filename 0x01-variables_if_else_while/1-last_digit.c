#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char str[20];
	int lastDigitIndex;
	char  lastNum;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	/* convert int to str */
	sprintf(str, "%d", n);

	lastDigitIndex = strlen(str) - 1;
	lastNum = str[lastDigitIndex];
	last = lastNum - '0'; /* convert to int from char */

	if (last  > 5)
	{
		printf("Last digit of %d is  %d  and is greater than 5\n", n,
		       last); }
	else if (last  < 6 && last > 0)
	{
		printf("Last digit of % d is %d and  is less than 6 and not 0\n"
		       , n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	return (0);
}
