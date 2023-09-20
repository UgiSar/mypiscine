/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:37:18 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/21 13:30:07 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] != '\0' && str[i + j] == to_find [j])
			j++;
		if (to_find[j] == '\0' )
		{
			return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

/* int	main (void)
{
	char str[] = "HelloWorld";
	char to_find[] = "llo";

	printf("%s", ft_strstr(str, to_find));
	return (0);
} */