/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:03:17 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/20 12:57:45 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	printf ("%d", ft_strcmp("hello", "yello"));
	printf ("\n%d", ft_strcmp("hello", "hel"));
} */