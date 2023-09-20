/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:00:28 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/10 17:47:14 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c < 123)
	{
		write (1, &c, 1);
		++c;
	}
}

/*int main()
{
    ft_print_alphabet();
    return (0);
} */
