/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toyoshii <toyoshii@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:59:13 by toyoshii          #+#    #+#             */
/*   Updated: 2023/04/18 21:06:12 by toyoshii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;

	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	while (min < max)
	{
		*arr = min;
		*arr++;
		min++;
	}
	return (*arr);
}

int	main(void)
{
	
}
