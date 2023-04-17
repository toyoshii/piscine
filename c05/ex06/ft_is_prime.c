int		ft_is_prime(int nb)
{
	int n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{

    int i = ft_is_prime(433);
    printf("%d\n", i);
}