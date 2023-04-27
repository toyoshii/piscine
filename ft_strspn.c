int	ft_strspn(char *s1, char *s2)
{
	int	i;
	int	j;
	int count = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (s2[j] == '\0')
			return (count);
		i++;
	}
	return (count);
}

#include <stdio.h>
int main(void)
{
	char *s1 = "abcba";
	char *s2 = "abc";
	int i = ft_strspn(s1, s2);
	printf("%d", i);
}

