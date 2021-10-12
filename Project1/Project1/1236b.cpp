#include <stdio.h>
#define k 49

int main(void)
{
	int n, m;
	char arrayNum[k][k];

	scanf("%d %d", &n, &m);

	printf("\n");
	// 2차원임


	for (int i = 0; i < 50; i++)
	{
		if (i >= n)
		{
			for (int c = n; c < 50; c++)
			{
				for (int v = 0; v < 50; v++)
				{
					arrayNum[c][v];
				}
			}
		}
		for (int j = 0; j < 50; j++)
		{
			if (j >= m)
			{
				for (int w = m; w < 50; w++)
				{
					arrayNum[i][w] = ' ';
				}
				printf("\n");
				break;
			}
			scanf("%c", &arrayNum[i][j]);
		}
	}

	// 2차원 array를 구했고 답을 찾는과정

	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{

		}
	}
}