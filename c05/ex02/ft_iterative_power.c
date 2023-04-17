int ft_iterative_power(int nb, int power)
{
    int ans;

    ans = 1;
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    while (power > 0)
    {
        ans *= nb;
        power--;
    }
    return (ans);
}



#include <stdio.h>
int main(void)
{
    int i = ft_iterative_power(5, 3);
    printf("%d", i);
    }
