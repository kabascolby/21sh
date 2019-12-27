/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaba <lkaba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:30:52 by lkaba             #+#    #+#             */
/*   Updated: 2019/10/17 23:49:24 by lkaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint8_t	ft_isprime(uint32_t a)
{
	uint32_t	c;

	c = 2;
	while (c <= a - 1)
	{
		if (a % c == 0)
			return (0);
		c++;
	}
	return (1);
}