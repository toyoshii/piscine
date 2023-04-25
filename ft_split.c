#include <stdlib.h>
#include <stdio.h>

int check_sep(char c)
{
    if (c == '\t' || c == '\n' || c == ' ' || c == 0)
        return (1);
    return (0);
}

int count_words(char *str)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && check_sep(str[i]))
            i++;
        if (str[i] != '\0')
            count++;
        while (str[i] != '\0' && !check_sep(str[i]))
            i++;
    }
    return (count);
}

int ft_sepstrlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0' && !check_sep(str[i]))
        i++;
    return (i);
}

char *ft_word(char *str)
{
    int i;
    int len;
    char *word;

    len = ft_sepstrlen(str);
    word = malloc(sizeof(char) * (len + 1));
    i = 0;
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    int i;
    int count;
    char **arr;

    count = count_words(str);
    arr = malloc(sizeof(char *) * (count + 1));
    if (arr == NULL)
        return (NULL);
    i = 0;
    while (i < count)
    {
        while (check_sep(*str))
            str++;
        if (*str != '\0')
        {
            arr[i] = ft_word(str);
            if (arr[i] == NULL)
                return (NULL);
            i++;
        }
        str += ft_sepstrlen(str);
    }
    arr[i] = '\0';
    return (arr);
}

int main(void)
{
    char *str = "Hello Fucking shit World";
    int len = count_words(str);
    char **arr = ft_split(str);
    for (int i = 0; i < len; i++)
    {
        printf("%s\n", arr[i]);
        free(arr[i]); // メモリを解放する
    }
    free(arr); // メモリを解放する
    return (0);
}
