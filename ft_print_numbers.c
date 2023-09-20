/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:03:51 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/10 15:00:10 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = 48;
	while (n < 58)
	{
		write(1, &n, 1);
		++n;
	}
}

/*int main(void)
{
    ft_print_numbers();
    return(0);
}*/
