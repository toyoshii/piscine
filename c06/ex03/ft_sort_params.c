#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return(0);
}

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i;
    int j;
    char tmp[10000];

    i = 0;
    while (i < argc -1)
    {
        j = i;
        while (j < argc -1)
        {
            if (ft_strcmp(argv[j], argv[j+1]) < 0)
            {
                ft_strcpy(tmp, argv[j]);
                ft_strcpy(argv[j], argv[j+1]);
                ft_strcpy(argv[j+1], tmp);
            }
            j++;
        }
        i++;
    }

    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return (0);
}