/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:41:32 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/16 12:52:53 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	arr[] = "HELLO";
	ft_strlowcase(arr);

	printf("%s", arr);
}
 */