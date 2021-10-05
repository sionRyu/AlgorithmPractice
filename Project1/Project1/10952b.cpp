#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int a, b;
	while (true)
	{
		scanf("%d %d", &a, &b);
		int result = a + b;
		if (a == 0 && b == 0)
			break;
		printf("%d\n", result);
	}
}