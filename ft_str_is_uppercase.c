/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:45:03 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/16 12:50:32 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main(void)
{
	printf("%d", ft_str_is_uppercase("ADD"));
	printf("\n%d", ft_str_is_uppercase("dfg"));
	printf("\n%d",ft_str_is_uppercase(""));
} */
