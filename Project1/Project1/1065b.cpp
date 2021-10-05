#include <stdio.h>
#include <stdbool.h>

int CheckHansu(int num);

int main(void)
{
	int N;
	int result = 0;
	scanf("%d", &N);
	for (int i = 1; i < N + 1; i++)
	{
		result += CheckHansu(i);
	}
	printf("%d", result);

}

int CheckHansu(int num)
{

	if (num < 100 || ((num / 10) % 10) * 2 == num / 100 + num % 10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
