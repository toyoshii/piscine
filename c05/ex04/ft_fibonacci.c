int		ft_fibonacci(int index)
{
	int ans;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		ans = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (ans);
	else
		return (-1);
}

#include <stdio.h>
int main(void)
{
    int i = ft_fibonacci(30);
    printf("%d\n", i);
}