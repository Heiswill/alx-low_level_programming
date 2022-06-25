#include <stdio.h>
#include <limits.h>

/**
 * minCoins - function to find the minimum number of coins.
 * @coins: coin amount
 * @m: size of array
 * @cents: argument 
 * Return: int
 */
int minCoins(int coins[], int m, int cents)
{
	int table[cents + 1];

	table[0] = 0;

	for (int i = 1; i <= cents; i++)
		table[i] = INT_MAX;
	for (int i = 1; i <= cents; i++)
	{
		for (int j = 0; j < m; j++)
			if (coins[j] <= i)
			{
				int sub_res = table[i - coins[j]];

				if (sub_res != INT_MAX && sub_res + 1 < table[i])
					table[i] = sub_res + 1;
			}
	}
	if (table[cents] == INT_MAX)
		return (-1);

	return table[cents];
}
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument input
 * @argv: argument array
 * Return: int
 */
int main()
{
	int coins[] = {25, 10, 5, 2, 1};
	int m = sizeof(coins)/sizeof(coins[0]);
	int cents = 13;

	printf("%d\n", minCoins(coins, m, cents));
	return (0);
}
