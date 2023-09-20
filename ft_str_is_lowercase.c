/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:05:46 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/18 15:43:29 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'a') || (str[i] >= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_lowercase("dfgdfg"));
	printf("\n%d", ft_str_is_lowercase("DSG"));
	printf("\n%d",ft_str_is_lowercase(""));
}*/
