#include <memory.h>
#include <math.h>
unsigned add(unsigned x, unsigned y)
{
	if (x == 0 && y == 0) return 0;
	const unsigned max_digits = (log10l(x > y ? x : y) + 1);
	int **arr = (int **)malloc(2 * sizeof(int *));
	for (unsigned i = 0; i<2; ++i)
	{
		arr[i] = (int *)malloc(max_digits*sizeof(int));
		unsigned j = 0;
		for (; j < max_digits; ++j)
			arr[i][j] = 0;
		j = 0;
		while (!i ? x > 0 : y > 0)
		{
			arr[i][max_digits - j - 1] = !i ? x % 10 : y % 10;
			!i ? (x /= 10) : (y /= 10);
			++j;
		}
	}
	unsigned result = arr[0][max_digits - 1] + arr[1][max_digits - 1];
	unsigned count = 1;
		for (int j = max_digits - 2; j >= 0; --j)
	{
		if (arr[0][j] + arr[1][j] > 0)
		{
			result += (arr[0][j] + arr[1][j]) * powl(10, result == 0 ? 1 : (int)(log10l(result) + count));
			count = 1;
		}
		else ++count;
	}
	for (int i = 0; i < 2; i++)
		free(arr[i]);
	free(arr);
	return result;
}