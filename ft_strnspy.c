/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnspy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:44:11 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/18 15:49:20 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char src[] = "Hello";
	char dest[10] = "world1";

	printf("%s\n", ft_strncpy(dest, src, 15));
}*/