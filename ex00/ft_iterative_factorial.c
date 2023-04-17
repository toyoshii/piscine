int		ft_iterative_factorial(int nb)
{
	int ans;

	ans = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		ans *= nb--;
	return (ans);
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void test_each(int input, int expected, size_t line)
{
    int actual = ft_iterative_factorial(input);
    if (expected == actual) return;
    printf("Input: %d\tExpected: %d\tActual: %d\tLine: %lu\n", input, expected, actual, line);
    abort();
}
#define te(input, expected) test_each(input, expected, __LINE__)
int main(void)
{
    te(INT_MIN, 0);
    te(0, 1);
    te(1, 1);
    te(2, 2);
    te(3, 6);
    te(4, 24);
    te(5, 120);
    te(6, 720);
    printf("\x1b[34mSUCCESS.\x1b[0m\n");
    return 0;
}