/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toyoshii <toyoshii@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:32:58 by toyoshii          #+#    #+#             */
/*   Updated: 2023/04/18 20:03:54 by toyoshii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest)
		ft_strcpy(dest, src);
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define STR "string"
 
int main(void)
{
  char *s1,*s2;
 
  s1 = ft_strdup(STR);
  s2 = strdup(STR);
  printf("your answer :         %s\n", s1);
  printf("correct answer :     %s\n", s2);
    free(s1);
    free(s2);
 
  return 0;
}
