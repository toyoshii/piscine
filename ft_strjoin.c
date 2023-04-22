#include <stdlib.h>

int     ft_strlens(int size, char **strs)
{
    int i;
    int j;
    int c;
    
    c = 0;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            c++;
            j++;
        }
        i++;
    }

    return (c);
}

char  *ft_strjoin(int size, char **strs, char *sep)
{
    char *arr;
    int i;
    int j;
    int k;
    int c;
    int len;

    len = ft_strlens(size, strs);
    arr = malloc(len);

    c = 0;
    i = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
            arr[c++] = strs[i][j++];
        k = 0;
        while (sep[k] != '\0')
            arr[c++] = sep[k++];
        i++;
    }
    return (arr);
}   
