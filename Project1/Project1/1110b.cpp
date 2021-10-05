#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int origin, a, b, c, newNum;
	int num = 0;
	bool run = true;

	scanf("%d", &origin);
	a = origin / 10;
	b = origin % 10;
	while (run)
	{
		c = a + b;
		newNum = 10 * b + c % 10;
		a = b;
		b = c % 10;
		num++;
		if (newNum == origin)
		{
			printf("%d", num);
			run = false;
		}
	}
}
