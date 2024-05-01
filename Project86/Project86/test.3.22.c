#include<stdio.h>
int fun(int n, int result[])
{
	int i, k, x = 0, sum, h;
	for (i = 1000; i <= n; i++)
	{
		sum = i; h = i;
		do
		{
			k = h % 10;
			k = k*k*k*k;
			sum -= k;
		} while (h /= 10);
		if (sum == 0)
		{
			result[x++] = i;
		}
	}
	return x;
}
int main()
{
	int result[10], n, i;
	n = fun(9999, result);
	for (i = 0; i < n; i++) printf("%d\n", result[i]);
}
