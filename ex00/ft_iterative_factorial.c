int ft_iterative_factorial(int nb)
{
    int    ans;

    ans = 1;
    if (nb < 0)
        return (0);
    else if (nb == 1)
        return (1);
    while (nb > 0)
        ans *= nb--;
        
    return (ans);
}

#include <stdio.h>
int main(void)
{
    int i = ft_iterative_factorial(6);
    printf("%d\n", i);
}