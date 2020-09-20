#include<stdio.h>
int prime(int);

int main()
{
	int n, result, m=0;
	scanf_s("%d", &n);
	result = prime(n);
	if (result == 1)
		printf("%d is prime.\n", n);
	else
	{
		printf("%d isn't prime.\n", n);
		printf("factor is ");
		for (int i = 2; i <= n; i++)
		{
			for (int j = i; n % j == 0;)
			{
				if (m != 0)
				{
					printf(" x ");

				}
				if (n % i == 0)
				{
					printf("%d", i);
					n /= i;
					m++;
				}

			}
		}
	}



	return 0;
}
int prime(int x)
{
	int c;

	for (c = 2; c <= x - 1; c++)
	{
		if (x % c == 0)
			return 0;
	}
	if (c == x)
		return 1;
}