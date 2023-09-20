/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usaranch <usaranch@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:49:00 by usaranch          #+#    #+#             */
/*   Updated: 2023/06/15 18:23:57 by usaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

/*int main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 3;
	
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
	return 0;
}*/
