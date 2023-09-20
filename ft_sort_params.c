/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:02:49 by usanch            #+#    #+#             */
/*   Updated: 2023/06/27 17:07:04 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*i;

	i = *a;
	*a = *b;
	*b = i;
}

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while ((a[i] == b[i]) && (a[i] != '\0') && (b[i] != '\0'))
	{
		i++;
	}
	return (a[i] - b[i]);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc -1)
	{
		j = 1;
		while (j < argc -1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		write (1, "\n", 1);
		j++;
	}
	return (0);
}
