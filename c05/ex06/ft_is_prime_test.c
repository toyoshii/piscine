int ft_is_prime(int nb)
{
    int n;

    n = 2;
    if (nb < 2)
        return (0);
    while (n * n < nb) 
    {
        if (nb % n == 0)
            return (0);
        n++;
    }
    return (1);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

    int i = ft_is_prime(atoi(argv[1]));
    printf("%d\n", i);
}